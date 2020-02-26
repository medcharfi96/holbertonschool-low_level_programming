#include "holberton.h"
/**
* _sqrt_recursion - la racine carré
* @x : int
* Return: int (mean true).
*/
int rec_num( int y)
{
if ( y * y == n)
{
return (y);
}
if ( y *y > n)
return(-1);
else 
y++;
rec_num(y);
}

int _sqrt_recursion(int n)
{
int x, y;

if (y * y == n)
{
return (y);
}
if ( y * y > n)
return (-1);
else  
y++;
rec_num(y);
x = rec_num(0);
return (x);
}
