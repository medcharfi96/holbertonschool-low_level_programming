#include "holberton.h"

/**
 * *_strchr - byte only from ather char.
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
if (*(s + i) == c)
{
return (s + i);
}
i++;
}
if (*(s + i) == c)
{
return (s + i);
}
return (0);
}
