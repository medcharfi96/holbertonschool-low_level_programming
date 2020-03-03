#include "holberton.h"
#include <stdlib.h>
/**
* create_array -crezte an array of char.
* @size: int.
* @c: char.
* Return: array(mean true).
*/
char *create_array(unsigned int size, char c)
{
char tab;
int i;
if (size == 0)
{
return (NULL);
}
tab = malloc(sizeof(c) * size);
if (tab == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
tab[i] = c;
}
return (cr);
}
