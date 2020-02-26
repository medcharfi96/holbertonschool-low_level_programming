#include "holberton.h"

/**
 * _puts_recursion - affichage de chaine.
 * @s: char.
 * Return: 0(mean true).
 */
void _puts_recursion(char *s)
{
int i;

i = 1;
if (s != '\0')
{
_putchar(*s);
_puts_recursion(s + i);
}
else
_putchar('\n');
}
