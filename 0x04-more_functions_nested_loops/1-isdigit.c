#include "holberton.h"

/**
 *_isdigit - check if digit  or no.
 *@c : int .
 *Return: 1 (mean true).
 */
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
return (1);
else
return (0);
}
