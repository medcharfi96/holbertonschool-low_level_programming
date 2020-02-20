#include "holberton.h"
/**
 * *string_toupper - string upccase
 * @a: string
 * Return: char (mean true).
 */
char *string_toupper(char *a)
{
int x;

x = 0;
while (*(a + x) != '\0')
{
if ((a[x] >= 'a') && (a[x] <= 'z'))
{
a[x] = a[x] - 32;
}
x++;
}
return (a);
}
