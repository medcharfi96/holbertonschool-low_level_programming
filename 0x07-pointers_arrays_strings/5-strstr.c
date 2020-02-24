#include "holberton.h"

/**
 * *_strstr - compare.
 * @haystack: char
 * @needle: char
 * Return: char redendance.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;

i = 0;
j = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
while (*(needle) != '\0')
{
if (haystack[i + j] == needle[0 + j1])
{
j++;
}
else
break;
}
}
if(j == 0)
{
return (&(haystack + i));
}
return (0);
}
