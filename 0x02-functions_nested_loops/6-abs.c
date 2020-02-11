#include "holberton.h"
/**
*_abs - give the absulut value
*@c : la variable locale
* Return: if  0 (mean true )
*/
int _abs(int c)
{
if (c >= 0)
{
return (c);
}
else if (c < 0)
{
c = (c * (-1));
return (c);
}
}
