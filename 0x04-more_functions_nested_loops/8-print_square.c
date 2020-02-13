#include "holberton.h"

/**
 * print_square - print a squard
 * @size : size of the squard
 * Return: nothing.
 */
void print_square(int size)
{
int i;
int j;
if (size != 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putcahr('\n');
}
}
else
_putchar('\n');
}
