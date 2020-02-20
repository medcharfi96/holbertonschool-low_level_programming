#include "holberton.h"
/**
 * _strncat - copies a string with precise number.
 * @src: string
 * @dest: string
 * @n: int.
 * Return: char (mant true).
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

x=0;
y=0;
while (*(dest+x) !=  '\0')
{
x++;
}
for (y = 0; y<= n-1; y++)
{
(*(dest + x + y ) )= *(src + y);
}
return (dest);
}
