#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function to search an element
 * @array: int
 * @cmp: fonction
 * @size: int
 * Return: int(mezn true)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
return (-1);
for (i = 0; i <= size; i++)
{
if (cmp(array[i]) == 1)
{
return (i);
}
}
return (-1);
}
