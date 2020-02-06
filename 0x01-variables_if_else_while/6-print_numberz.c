#include <stdio.h>
/**
 * main - show all number <10 
 * use only putchar
 * Return: if 0(mean true)
 **/
int main(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
