#include "holberton.h"
/**
* factorial - calculer le factoriel dun entier.
* @n : int
* Return: int (mean true).
*/
int factorial(int n)
{
int res;

res = 0;
if (n > 1)
{
res = (factorial(n - 1) * n);
return (res);
}
if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
