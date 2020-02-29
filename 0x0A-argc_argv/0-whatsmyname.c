#include <stdio.h>

/**
 * main - fonction to write the file name
 * @argc: int.
 * @argv: char containt the commande line
 * Return: 0(mean true).
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
