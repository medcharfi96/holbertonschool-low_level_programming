#include "holberton.h"
/**
*jack_bauer - give all the time of the day
*using only putchar
* Return: nothing  (mean true )
*/
void jack_bauer(void)
{
int x, y;
for (x = 0; x < 24; x++)
{
for (y = 0; y < 60; y++)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
_putchar(':');
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
_putchar('\n');
}
}
}
