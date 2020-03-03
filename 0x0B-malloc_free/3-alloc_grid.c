#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - matrice of 0
 * @width: int.
 * @height: int.
 * Return: matrice(mean true).
 */
int **alloc_grid(int width, int height)
{
int w, h, vid;
int **tab;

if ((height < 0) && (width < 0))
{
return (NULL);
}
tab = (int **)malloc(sizeof(int *) * height);
if (tab == NULL)
{
return (NULL);
}
for (h = 0; h < height; h++)
{
tab[h] = malloc(width * sizeof(int *));
if (tab[h] == NULL)
{
for (vid = 0; vid <= h; vid++)
{
free(tab[vid]);
}
return (NULL);
}
for (w = 0; w < width; w++)
{
tab[w][h] = 0;
}
}
return (tab);
}
