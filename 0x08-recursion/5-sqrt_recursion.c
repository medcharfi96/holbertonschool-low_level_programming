#include "holberton.h"
/**
* rec_num - calcule racine
* @y : int
* Return: int (mean true).
*/
int rec_num(int y)
{
if (y * y == n)
{
return (y);
}
if (y * y > n)
return (-1);
else
y++;
rec_num(y);
}
/**
*_sqrt_recursion - racine carre
* @n : int
* Return: int
*/
int _sqrt_recursion(int n)
{
int x, y;

if (y *y == n)
{
return (y);
}
if (y *y > n)
return (-1);
else
y++;
rec_num(y);
x = rec_num(0);
return (x);
}
