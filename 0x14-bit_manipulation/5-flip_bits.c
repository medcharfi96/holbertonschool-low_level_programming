#include "holberton.h"

/**
 * flip_bits - flip.
 * @m: int
 * @n: int
 * Return: int(meantrue)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int res, v;

res = 0;
while (x > 0)
{
v = x & 1;
res = res + v;
x = x >> 1;
}
return (res);
}
