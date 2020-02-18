#include "holberton.h"
/**
 * _strlen - get string length
 * @s: string to know lengh
 * Return: int (string lentgh).
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != NULL)
{
x++;
}
return (x);
}
