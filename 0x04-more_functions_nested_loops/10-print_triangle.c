#include "holberton.h"

/**
* print_triangle - show a trinagle .
* @size : int 
* Return: 0 (mean true ).
*/

void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
if (y < size - x )
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
