#include "holberton.h"
/**
 * reverse_array - copies a string.
 * @a: int
 * @n: int
 * Return: char (mant true).
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	i = 0;
	n--;
	while (i < (n / 2))
	{
		c = a[i];
		a[i] = a[n - i];
		a[n - i] = c;
		i++;
	}
}
