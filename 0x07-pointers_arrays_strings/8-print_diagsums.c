#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - calculate the diagonal result
* @a: the pointer matrice
* @size: matrice size
* Return: nothing(mean true).
*/
void print_diagsums(int *a, int size)
{
int i;
int diago1;
int diago2;

i = 0;
diago1 = 0;
diago2 = 0;
for (i = 0; i < size; i++)
{
diago1 = diago1 + (a[(i * size) + i]);
diago2 = diago2 + (a[(i * size) + (size - i)]);
}
printf("%d, %d\n", diago1, diago2);
}
