#include "holberton.h"

/**
 * print_most_numbers - show all numbers.
 *
 * Return: 1 (mean true).
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a < 10; a++)
{
if (a != 0 && a != 4)
_putchar(a + '0');
}
_putcahr('\n');
}
