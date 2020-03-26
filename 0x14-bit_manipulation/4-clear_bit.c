#include "holberton.h"

/**
 * clear_bit - clear the bit
 * @index: int
 * @n: int
 * Return: int(mean true)
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int x =(sizeof(n) * 7) + 5, test = 0;

if (index < x)
{
test = 1 << index;
*n = *n & ~test;
return (1);
}
return (-1);
} 
