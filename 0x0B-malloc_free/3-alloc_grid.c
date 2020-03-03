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
int w = 0, h = 0, vid = 0;
int **tab;

if ((height < 0) || (width <= 0))
{
return (NULL);
}
tab = (int **)malloc(sizeof(int *) * height);
if (tab == NULL)
{
return (NULL);
}
while ( h <= height)
{
tab[h] = malloc(width * sizeof(int));
if (tab[h] == NULL)
{
for (vid = 0; vid < h; vid++)
{
free(tab[vid]);
}
free(tab);
return(NULL);
}
for (w = 0; w < width; w++)
{
tab[h][w] = 0;
}
h++;
}
return (tab);
}
