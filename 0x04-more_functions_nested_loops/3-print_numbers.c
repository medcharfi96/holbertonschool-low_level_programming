#include "holberton.h"

/**
 * print_numbers - show all numbers.
 *
 * Return: nothing (mean true).
 */
void print_numbers(void)
{
int r;
for (r = 0; r < 10; r++)
{
_putchar(r + '0');
}
_putchar('\n');
}
