#include "holberton.h"
/**
 * malloc_cheked - check the space located.
 * @b : int
 * Return: 0(mean true).
 */
void *malloc_checked(unsigned int b)
{
char *a;
a = malloc(sizeof(b));
if (a =='\0')
printf("98");
return (0);
}
