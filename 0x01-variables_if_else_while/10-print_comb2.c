#include <stdio.h>
/**
 * main - show all number under 100
 * using only putchar
 * Return: if  0 (mean true )
 */
int main(void)
{
	int n,x;

	for (n = 0 ; n < 100 ; n++)
	{
		if (n < 10 )
		{
			for (x = 0 ; x < 10 ;x++)
			{ 
				if (n != 9 && x != 9) {
					putchar(n + '0');
					putchar(x + '0');
					putchar(',');
					putchar(' ');
				}
				else 
				{ putchar(n+ '0');
					putchar (x+ '0');
				}	}
		}
	}
	putchar('\n');
	return (0);
}
