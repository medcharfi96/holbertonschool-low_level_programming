#include "holberton.h"

/**
 * _isupper - check if uppcase or no
 *@c : int variable
 * Return: 1 (mean true).
 */
int _isupper(int c)
{
if (c >= 97 || c <= 90)
{
return (1);
}
else
return (0);
}
