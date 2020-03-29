#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block
 * @ptr: pointeur
 * @old_size: int
 * @new_size: int
 * Return: Nothing(mean true)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nouveau;
char *old_p;
unsigned int i = 0;

if (ptr == NULL)
{
nouveau = malloc(new_size);
return (nouveau);
}
if (new_size == old_size)
return (ptr);
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
old_p = ptr;
nouveau = malloc(new_size);
if (nouveau == NULL)
return (NULL);
if (new_size > old_size)
{
while (i < old_size)
{
nouveau[i] = old_p[i];
i++;
}
free(ptr);
}
return (nouveau);
}
