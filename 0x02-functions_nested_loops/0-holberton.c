#include <stdio.h>
/**
* main -show the world holberton followed by enter.
* Return: 0 (mean true)
*
**/
int main(void)
{
	char *chaine = "Holberton";

	while (*chaine)

	{     putchar(*chaine);
		chaine++;
	}
	putchar('\n');
	return (0);
}
