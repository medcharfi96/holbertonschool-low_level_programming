#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate .
 * @b : int
 * Return: 0(mean true).
 */
void *malloc_checked(unsigned int b)
{
char *h;

h = malloc(b);
if (h == '\0')
{
exit(98);
}
return (h);
}
