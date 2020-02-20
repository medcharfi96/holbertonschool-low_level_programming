#include "holberton.h"
/**
 * reverse_array - copies a string.
 * @src: string
 * @dest: string
 * Return: char (mant true).
 */
void reverse_array(int *a, int n)
{
int i;
i=0;
int c ;
n--;
while (i < (n / 2))
{
c = a [i]
a[ i ]= a [ n -i];
a[n -i ] = c ;
i++;
}
}
