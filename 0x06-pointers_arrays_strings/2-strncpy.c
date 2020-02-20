#include "holberton.h"
/**
 * *_strncpy - coppy from string to another .
 * @dest : char
 * @src : char
 * @n : int
 * Return: char (mean true).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	while ((x < n) && (src[x] != '\0'))
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
