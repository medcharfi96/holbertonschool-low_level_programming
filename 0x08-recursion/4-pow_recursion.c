#include "holberton.h"
/**
* _pow_recursion - claculate the power of two integer
* @x : int.
* @y : int.
* Return: int (mean tru).
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y > 1)
{
return (x * _pow_rcursion(x, y - 1));
}
else
return (1);
}
