#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_cheked - allocate .
 * @b : int
 * Return: 0(mean true).
 */
void *malloc_checked(unsigned int b)
{
void *h;

h = malloc(sizeof(b));
if (h == '\0')
{
exit(98);
}
return (0);
}
