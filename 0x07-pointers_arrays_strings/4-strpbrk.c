#include "holberton.h"

/**
 * *_strpbrk - check the code for Holberton School students.
 * @s: char.
 * @accept: char
 * Return: char.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j,

i = 0;
j = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j =0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return(*(s + i));
}
}
}
}
