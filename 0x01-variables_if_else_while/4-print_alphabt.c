#include <stdio.h>
/**
 * main - Entry point
 *do not show the alphabet  q  and  e
 *Return: if 0 (mean true)
 */
int main(void)
{
	char chara;

	for (chara = 'a'; chara <= 'z'; chara++)
	{
		if (chara == 'q' ||  chara == 'e')
		{
			continue;
		}
		else
			putchar(chara);
	}
	putchar('\n');
	return (0);
}
