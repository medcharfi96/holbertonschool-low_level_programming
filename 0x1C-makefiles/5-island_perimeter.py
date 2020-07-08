#!/usr/bin/python3
"""
island clacle
"""


def island_perimeter(grid):
    """ fonction de perimetre"""
    if (type(grid) is not list or
            type(grid[0]) is not list):
        return
    mouhit = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                if j + 1 <= len(grid[i]) and j - 1 >= 0:
                    if grid[i][j - 1] is 1 and grid[i][j + 1] is 1:
                        mouhit = mouhit + 4
                if i + 1 <= len(grid) and i - 1 >= 0:
                    if grid[i - 1][j] is 1 and grid[i + 1][j] is 1:
                        mouhit = mouhit + 4
                if grid[i - 1][j] is 1 and (grid[i][j+1] or grid[i][j-1]) is 1:
                    mouhit = mouhit + 4
                if grid[i + 1][j] is 1 and (grid[i][j+1] or grid[i][j-1]) is 1:
                    mouhit = mouhit + 4
    return mouhit
