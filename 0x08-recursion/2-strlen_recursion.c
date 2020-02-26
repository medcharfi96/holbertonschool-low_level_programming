#include"holberton.h"

/**
 * _strlen_recursion - calculate the long of string.
 * @s: char
 * Return: int (mean true).
 */
int _strlen_recursion(char *s)
{
int i;

i = 0;
if (s == '\0')
{
return (0);
}
i++;
i = _strlen_recursion(*s) + 1;
return(i);
}
