#include <stdio.h>
/**
 * main -show all  the alphabet in lowercase and uppercase version .
 * Return: 0 (mean true)
 *
 **/
int main(void)
{
int iat = 97;
int uat = 65;
while (iat <= 122)
{
putchar(iat);
iat++;
}
while (uat <= 90)
{
putchar(uat);
uat++;
}
putchar('\n');
return (0);
}
