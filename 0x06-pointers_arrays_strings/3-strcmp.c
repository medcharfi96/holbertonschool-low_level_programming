#include "holberton.h"
/**
 * _strcmp - compare to string.
 * @s1: string
 * @s2: string
 * Return: int (la comparaisrom).
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	int y;
	int z;
	x = 0;
	y = 0;
	z = 0;
	while ( *(s1 +x) != '\0')
	{
		x++;
	}
	while ( *(s2 + y) != '\0')
	{
		y++;
	}
	if ( x > y)
	{
		z = 1;
	}
	else if ( x < y)
	{
		z = -1;
	}
	return (z);
}
