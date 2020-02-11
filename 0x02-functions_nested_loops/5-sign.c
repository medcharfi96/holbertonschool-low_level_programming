#include "holberton.h"
/**
* print_sign - check is a postive or negative or zero
* @n : variable globale
* Return: Always 1 (mean true).
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
