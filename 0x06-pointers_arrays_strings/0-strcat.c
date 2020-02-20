#include "holberton.h"
/**
 * *_strcat - concatiner 2 strings.
 * @src: string
 * @dest: string
 * Return: char (mean true).
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;                                      
	x=0;y=0;                                      
	while (*(dest+x) !=  '\0')
	{
		x++;
	}
	while (*(src+y) != '\0')
	{
		(*(dest + x + y ) )= *(src + y);
		y++;
	}
	return (dest);
}
