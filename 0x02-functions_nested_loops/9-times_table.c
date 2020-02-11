#include "holberton.h"
/**
 *times_table - show all the multiplication
 * using only putchar
 * Return: Void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if ((x * y) < 10)
			{
			_putchar(x * y + '0');
				if (y != 9)
				{
				_putchar(',');
				}
			_putchar(' ');
			_putchar(' ');
			}
			else if (x * y == 81)
			{
				_putchar((x * y) / 10 + '0');
				_putchar((x * y) % 10 + '0');
			}
			else
			{
				_putchar((x * y) / 10 + '0');
				_putchar((x * y) % 10 + '0');
				_putchar(' ');
				if (y != 9)
				{
				_putchar(',');
				}
			}
		}
	_putchar('\n');
	}
}
