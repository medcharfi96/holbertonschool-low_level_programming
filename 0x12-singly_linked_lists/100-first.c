#include <stddef.h>
#include <stdio.h>

void Before_main(void) __attribute__ ((constructor));

/**
 * Before_main - print before the main
 *
 * Return: nothing(mean true)
 */

void Before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
