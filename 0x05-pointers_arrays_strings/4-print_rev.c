#include "holberton.h"
#include<stdio.h>
/**
 * print_rev - show inversing text
 * @s : char
 * return : nothing(mean true)
 */
void print_rev(char *s)
{
int x;
int y;

while (s[x] != '\n')
{
x++;
}
for (y = x - 1; y >= 0; y--)
_putchar(*(s[y]));
_putchar('\n');
}
