#include "holberton.h"
#include<stdlib.h>
/**
 * free_grid - vider
 * @grid : int
 * @height : int
 * Return: 0(mean true)
*/
void free_grid(int **grid, int height)
{
int count;

if (grid != NULL && height != 0)
{
while (count < height)
{
free(grid[count]);
count++;
}
free(grid);
}
}
