#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a;
int b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 14; b++)
{
_putchar(b + '0');
}
}
}
