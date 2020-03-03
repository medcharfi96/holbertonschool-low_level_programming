#include "holberton.h"
#include <stdlib.h>
/**
* *str_concat -concat two char.
* @s1: char.
* @s2: char.
* Return: char(mean true).
*/
char *str_concat(char *s1, char *s2)
{
int ls1, ls2, i, j;
char *final;

ls1 = 0;
ls2 = 0;
while (s1[ls1] != '\0')
{
ls1++;
}
while (s2[ls2] != '\0')
{
ls2++;
}
final = malloc(sizeof(char) * (ls1 + ls2 + 1));
if (final == NULL)
return (NULL);
for (i = 0; i < ls1; i++)
{
final[i] = s1[i];
}
for (j = 0; j < ls2; j++)
{
final[i + j] = s2[j];
}
final[ls1 + ls2] = '\0';
return (final);
}
