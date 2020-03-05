#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - allocate .
 * @b : unsigned int
 * Return: 0(mean true).
 */
void *malloc_checked(unsigned int b)
{
char *ch;

ch = malloc(b);
if (ch == NULL)
{
exit(98);
}
return (ch);
}
