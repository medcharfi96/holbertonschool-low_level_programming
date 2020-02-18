#include "holberton.h"
/**
 * _strcpy - copies a string.
 * @src: string
 * @dest: string
 * Return: char (mant true).
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	return (src);
}
