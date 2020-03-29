#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - new array
 * @min: int
 * @max: int
 * Return: int(mean true)
 */

int *array_range(int min, int max)
{
int *tab, count;

count = 0;
if (max < min)
return (NULL);
tab = malloc((max - min + 1) * sizeof(int));
if (tab == NULL)
return (NULL);
while (count < (max - min + 1))
{
tab[count] = count;
count++;
}
return (tab);
}
