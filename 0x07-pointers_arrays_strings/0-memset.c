#include "holberton.h"

/**
 * *_memset - prints the adrrese alocated
 * @s: char
 * @b: char
 * @n: int
 * Return: char ( the addresse located).
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
