#include "holberton.h"

/**
 * print_line - shw symbole.
 * @n : variable de recurance
 * Return: nothing.
 */
void print_line(int n)
{
int i;
int x;
if (n > 0)
{
for (i = 0; i < n - 1; i++)
{
for (x = 0; x < i; x++)
{
_putchar(' ');
}
_putchar('\\');
}
}
}
_putchar('\n');
}
