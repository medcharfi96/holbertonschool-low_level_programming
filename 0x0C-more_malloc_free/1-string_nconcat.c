#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatiner deux chaines
 * @s1: char
 * @s2: char
 * @n: int
 * Return: char(mean true).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2 = 0, i = 0;
	char *ch;

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		n = l2;
	ch = malloc(sizeof(char) * (l2 + l1 + 1));
	if (ch == '\0')
	{
		return (NULL);
	}
	while (i < l1)
	{
		ch[i] = s1[i];
		i++;
	}
i = 0;
	while (i < l2)
	{
		ch[i + l1] = s2[i];
		i++;
	}
	ch[i + l1 - 2] = '\0';
	return (ch);
}
