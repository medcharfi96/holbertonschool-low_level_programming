#include "holberton.h"

/**
 * more_numbers - show number from 0 to 14  10 fois
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a;                            
int b;
for (a = 0; a <= 10; a++)
{
for (b = 0; b <= 14; b++)
{
if (b / 10 != 0)
{
putchar(b / 10 + '0');
}                                      
putchar(b % 10 + '0');
}                                            
putchar('\n');
}
}
