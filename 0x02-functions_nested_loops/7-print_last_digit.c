#include "holberton.h"
/**
* main -show the last digital num .
*@c : var loc
* Return: 0 (mean true)
*
**/
int print_last_digit(int c)
{
int a;
if (c >= 0)
{
a=c % 10;
return (a );
}
else if (c < 0)
{
c = (c * (-1));
}
a= c % 10;
return(a);
}
