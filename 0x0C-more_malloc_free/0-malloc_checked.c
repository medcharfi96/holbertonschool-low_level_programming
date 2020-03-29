#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate
 * @b : int
 * Return: pointeur(mean true)
 */

void *malloc_checked(unsigned int b)
{
void *ch;

ch = malloc(b);
if (ch == NULL)
{
exit(98);
}
return (ch);
}
