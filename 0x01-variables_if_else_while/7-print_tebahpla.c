#include <stdio.h>
/**
 * main - show alphabet in invert mode from z to a 
 * using anly putchar 
 * Return:if 0 (mean true)
 */
int main(void)
{
	char chara;

	for (chara = 'z'; chara >= 'a'; chara--)
		putchar(chara);
	putchar('\n');
	return (0);
}
