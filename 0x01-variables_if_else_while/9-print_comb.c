#include <stdio.h>
/**
 * main - show all the number <10 
 * using only putchar
 * Return: if  0 (mean true)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
