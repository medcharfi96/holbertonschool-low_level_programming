#include <stdio.h>
/**
 * main - show all number under 100
 * using only putchar
 * Return: if  0 (mean true )
 */
int main(void)
{
int n;
for (n = '0'; n <= '99'; n++)
{
if (n < '9')
{
putchar('0');
putchar(n);
putchar(',');
putchar(' ');
}
else 
{
putchar(n);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
