#include "holberton.h"

/**
 * *strchr - check the code for Holberton School students.
 * @s: char
 * @c: char
 * Return: char.
 */
char *_strchr(char *s, char c)
{
int i;

i = 0;
while (*(s + i) != '\0')
{
if (s[i] != c)
{
i++;
}
else
return (*(s + i));
i++;
}
