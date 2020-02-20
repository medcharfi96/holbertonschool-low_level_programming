#include "holberton.h"
/**
 * *cap_string - compare to string.
 * @s1: string
 * Return: char (la comparaisrom).
 */
char *cap_string(char *s1)
{
char a[] = {' ', ',', ';', '.', '!', '?', '(', ')', '{', '}', '"', '\t', '\n'};
int i = 0;
int j = 0;
while (s1[i] != '\0')
{
for (j = 0; j < 13; j++)
{
if (s1[i] == a[j] && (s1[i + 1] <= 'z' && s1[i + 1] >= 'a'))
{
s1[i + 1] = s1[i + 1] - 32;
}
}
i++;
}
return (s1);
}
