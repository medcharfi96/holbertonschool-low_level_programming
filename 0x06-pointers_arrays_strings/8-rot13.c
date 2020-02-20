#include "holberton.h"
/**
* rot13 - crepting
* @x : char
* Return: 0(mean true).
*/
char *rot13(char *x)
{
int a;
int b;
char letre[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (a = 0; x[a] != '\0'; a++)
{
for (b = 0; letre[b] != '\0'; b++)
{
if (letre[b] == x[a])
{
x[a] = code[b];
break;
}
}
}
return (x);
}
