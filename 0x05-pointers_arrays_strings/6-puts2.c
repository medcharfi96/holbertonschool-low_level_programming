#include "holberton.h"
/**
 * puts2 - prints char divised by 2
 * @str: string
 * Return: nothing (mean true).
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x] + '0');
	}
	_putchar('\n');
}