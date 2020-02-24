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
int nn = 0;
int hh = 0;

while (haystack[hh])
si++;
while (needle[nn])
nn++;
if (*needle == '\0')
return (haystack);
for (i = 0; i <= hh; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; j < nn; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (j == nn)
return (&(haystack[i]));
}
}
return (0);
}
