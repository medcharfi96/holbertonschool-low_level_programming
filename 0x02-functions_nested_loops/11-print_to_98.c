#include "holberton.h" 
#include <stdio.h> 
/** 
* print_to_98 - fct of showing 
* @n: variable locale
* Return: nothing 
*/
void print_to_98(int n)
{
int i;
if (n == 98)
{
printf("98\n");
}
else if (n < 98)
{
for (x = n; x < 98; x++)
printf("%d, ", x);
printf("98\n");
}
}
