#include "holberton.h"
/**
*times_table - show all the multiplication
* using only putchar
* Return: Void
*/
void times_table(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if ((x*y)/10==0)
{
putchar(' ');
putchar(' ');
putchar((x % 10)*(y % 10) + '0');
putchar(',');
}
else if (x*y==81)
{
putchar(' ');
putchar((x % 10)*(y % 10) + '0');
}
else
{
putchar(' ');
putchar(' ');
putchar((x % 10)*(y % 10) + '0');
putchar(',');
}
}
putchar('\n');
}
}
