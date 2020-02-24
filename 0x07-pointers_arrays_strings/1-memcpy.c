#include "holberton.h"

/**
 * *_memcpy - coppy from char to char
 * @dest: char
 * @src: char
 * @n: int
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

i = 0;
for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
