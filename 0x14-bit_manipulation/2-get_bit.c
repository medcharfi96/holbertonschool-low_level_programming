#include "holberton.h"

/**
 * get_bit - give the val of bit
 * @index: int
 * @n: long int
 * Return: int(mean true)
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i, test;

i = sizeof(n) * 8;
if (index < i)
{
test = 1 & (n >> index);
if (test <= 1)
return (test);
}
return (-1);
}
