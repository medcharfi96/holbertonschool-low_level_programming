#include "holberton.h"

/**
 * print_diagonal - shw symbole.
 * @n : variable de recurance
 * Return: nothing.
 */
void print_diagonal(int n)
{
int i;
int x;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (x = 0; x < i; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
