#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - fct of showing
* @n: variable locale
* Return: nothing
*/
void print_to_98(int n)
{
int x;
if (n == 98)
{
printf("%d", n);
}
else if (n < 98)
for (x = n; x <= 98; x++)
{
if (x == 98)
printf("%d", x);
else
printf("%d, ", x);
}
else
{
for (x = n; x >= 98; x--)
{
if (x == 98)
printf("%d", x);
else
printf("%d, ", x);
}
}
}
