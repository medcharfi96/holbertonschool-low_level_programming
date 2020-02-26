#include "holberton.h"

/**
 * _print_rev_recursion - affichage de chaine a lenvers.
 * @s: char.
 * Return: 0(mean true).
 */
void _print_rev_recursion(char *s)
{
int i;

i = 0;
if (*s == '\0')
{
return;
}
_print_rev_recursion( s - 1);
_putcahr(*s);
}
