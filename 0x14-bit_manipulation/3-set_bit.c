#include "holberton.h"

/**
 * set_bit - init bit
 * @n: int
 * @index: int
 * Return: int(mean true)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int x = sizeof(n) * 8;
if (index < x)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
