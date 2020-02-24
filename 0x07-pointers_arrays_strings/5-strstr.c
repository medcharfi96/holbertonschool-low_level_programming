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
if (haystack[i] == needle[0])
{
j++;
if (haystack[i + j] == needle[j])
{
j++;
}
}
else
break;
return (&(haystack[i]));
}
}
return (0);
}
