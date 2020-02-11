#include "holberton.h"
/**
* print_alphabet -show the alphabet.
* Return: 0 (mean true)
*
**/
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
