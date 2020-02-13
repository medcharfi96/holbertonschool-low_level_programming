#include "holberton.h"

/**
 * print_line - shw symbole.
 * @n : variable de recurance
 * Return: nothing.
 */
void print_line(int n)
{
int i;
if (n != 0)
{
for (i = 0; i < n - 1; i++)
{
_putchar(' ')
}
}
_putchar('\n');
}
