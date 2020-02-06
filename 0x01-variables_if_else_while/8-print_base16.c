#include <stdio.h>
/**
 * main - show numbers of base 16 by the mode of lowcase
 * followed by a new line.
 * Return: 0
 **/
int main(void)
{
int x;
char ch;
ch = 'a';
for (x = 0 ; x <= 9 ; x++)
{
putchar(x + '0');
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
