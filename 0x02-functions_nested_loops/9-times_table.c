#include "holberton.h"
/**
*times_table - show all the multiplication
* using only putchar
* Return: Void
*/
void times_table(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if ((x * y) < 10)
{
if (y != 9)
{
_putchar(' ');
_putchar(' ');
_putchar(x * y + '0');
_putchar(',');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(x * y + '0');
}
}
else if (x * y == 81)
{
_putchar(' ');
_putchar((x * y) / 10 + '0');
_putchar((x * y) % 10 + '0');
}
else if ((x * y) > 10)
{
if (y != 9)
{
_putchar(' ');
_putchar((x * y) / 10 + '0');
_putchar((x * y) % 10 + '0');
_putchar(',');
}
else
_putchar(' ');
_putchar((x * y) / 10 + '0');
_putchar((x * y) % 10 + '0');
}
_putchar('\n');
}
}
}
