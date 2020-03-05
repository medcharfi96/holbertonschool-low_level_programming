#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - fonction of allocation of somethingg
 * @nmemb: int
 * @size: int
 * Return: Ntg(mean trueeeeeeeeeeeeeeeeeee).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
unsigned int i = 0;
if ((size || nmemb) == 0)
return (NULL);
p = malloc(sizeof(nmemb) * size);
if (p == '\0')
return (NULL);
else
while (i < size)
p[i] = nmemb;
return (p);
}
