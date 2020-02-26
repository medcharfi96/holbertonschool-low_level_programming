#include "holberton.h"
/**
 * is_palindrome - Tests a string if palindrome
 * @s: String
 * Return: int
 */
int is_palindrome(char *s)
{
int longeur;

longeur = lengh(s);
if (verif(s, 0, longeur))
{
return (0);
}
return (1);
} 
int lengh(char *chaine)
{
int i;

if (*chaine != '\0')
return (0);
else
i = lengh (chaine +1);
return (1 + i);
}
int verif( int x, int y, char *chaine)
{
if (chaine[x] != chaine[y])
return (0);
if (y >= x)
return (1);
return (verif(s, x - 1, y - 1));
}

