#include "holberton.h"

/**
 * main - show all numbers from 1  to 100  without multiple of 3  and  5.
 *
 * Return: nothing
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 3 == 0  && i % 5 != 0)
{
printf("Fizz");
printf(" ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
printf(" ");
}
}
else
printf("%d", i);
printf(" ");
}
_putchar('\n');
}
