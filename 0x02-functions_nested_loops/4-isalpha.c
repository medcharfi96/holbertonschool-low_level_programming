#include "holberton.h"
/**
*_isalpha -show if is an aplhabet or noo.
* @c :variable pour test.
* Return: 1 (mean true )
**/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
