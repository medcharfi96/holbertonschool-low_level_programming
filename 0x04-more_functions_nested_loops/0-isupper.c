#include "holberton.h"

/**
 * _isupper - check if uppcase or no
 *@c : int variable
 * Return: 1 (mean true).
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
