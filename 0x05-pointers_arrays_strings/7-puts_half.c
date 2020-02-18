#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - print second half
 * @str : char
 * Return : nothing(mean true).
 */
void puts_half(char *str)
{
int i, z;

z = 0;
while (str[z] != '\0')
{
z++;
}
if (z % 2 == 0)
{
for (i = z / 2 ; i <= z; i++)
{
_putchar(str[i]);
}
}
else
{
z = ((z - 1) / 2);
for (i = z; i <= z; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
