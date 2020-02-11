#include <stdio.h>
/**
* print_alphabet_x10 -show the alphabet 10 time.
* Return: 0 (mean true)
*
**/
void print_alphabet_x10(void);
char x;
int a;
for (a = 0; a < 10; a++)
{
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}
}
