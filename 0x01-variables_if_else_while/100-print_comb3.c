#include <stdio.h>
/**
 * main - mainfonc
 * auditeur medcharfi96
 * Return: if 0 (mean  true)
 */
int main(void)
{
	int fl, sl;
	for (fl = 0; fl < 9; fl++)
	{
		for (sl = fl + 1; sl < 10; sl++)
		{
			putchar(fl + '0');
			putchar(sl + '0');
			if (fl < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
