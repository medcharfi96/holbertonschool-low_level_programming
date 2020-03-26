#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - from bin ton int
 * @b: char
 * Return: int(mean true)
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0, i = 0, count = 0;

if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1')
i++;
else
return (0);
}
i--;
while (b[count] != '\0')
{
if (b[count] == '1')
{
res = res + (1 << i);
}
i--;
count++;
}
return (res);
}
