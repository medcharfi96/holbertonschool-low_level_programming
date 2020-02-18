#include "holberton.h"
/**
 * rev_string - reverse in the middle
 * @s: char
 * Return: 0(mean true).
 */
void rev_string(char *s)
{
int i = 0;
int l = 0;
char a;

while (s[l] != '\0')
l = l + 1;
for (i = 0; i < l / 2; i++)
{
a = s[i];
s[i] = s[l - i];
s[l - i] = a;
}
}
