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
int w, h;
int *tab;

if (height > 0 && width > 0)
{
tab = malloc(height * sizeof(int));
if (tab == NULL)
{
return (NULL);
}
else
{
for (h = 0; h < height; h++)
{
tab = malloc(width * sizeof(int));
for (w = 0; w < width; w++)
{
tab[w][h] = 0;
}
}
}
return (tab);
}
else
return (NULL);
}
