#include "holberton.h"
#include <stdio.h>
/**
 * main - show all numbers from 1  to 100  without multiple of 3  and  *
 * Return: 0 (mean true)
*/
int main(void)
{
int i;
for (i = 1; i <= 99; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0  && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz ");
}
}
else
printf("%d ", i);
}
printf("Buzz\n");
return (0);
}
