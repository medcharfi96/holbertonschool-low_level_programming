#include "holberton.h"
/**
 * _puts - show me the sentence
 * @str: string
 * Return: nothing (mean true).
 */
void _puts(char *str)
{
int x = 0;

while (*(str + x) != '\0')
{
_putchar(*(str + x));
x++;
}
}
