#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy to new space allocated
 * @str: string.
 * Return: pointeur(mean true).
 */
char *_strdup(char *str)
{
int i, count;
char c;

i = 0;
count = 0;
if (str ==NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
c = malloc(sizeof(char) * i);
for (count = 0; count <= i; count++)
{
c[count] = str[count];
}
return (c);
}
