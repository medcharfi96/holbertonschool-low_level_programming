#include "holberton.h"
#include <stdio.h>
/**
 * print_array - show the array
 * @a: array
 * @n: int
 * Return: nothing (mean true).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
