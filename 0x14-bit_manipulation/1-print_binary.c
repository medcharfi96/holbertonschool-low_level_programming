#include "holberton.h"

/**
 * print_binary - from dec to bin
 * @n: long int
 * Return: void(mean true)
*/

void print_binary(unsigned long int n)
{
if (n <= 1)
_putchar(n + '0');
else
{
if ((n >> 1) != 0)
print_binary(n >> 1);
n = n & 1;
_putchar(n + '0');
}
}


