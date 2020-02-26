#include "holberton.h"
/**
 * lengh - longeur de chaine
 * @chaine: char
 * Return: int(mean true).
 */
int lengh(char *chaine)
{
if (*chaine != '\0')
return (0);
else
return (1 + lengh(chaine + 1));
}
/**
 * verif - algo de verification
 * @chaine: char
 * @x: int
 * @y: int
 * Return: int(mean true).
 */
int verif(int x, int y, char *chaine)
{
if (chaine[x] != chaine[y])
return (0);
if (x >= y)
return (1);
return (verif(x + 1, y - 1, chaine));
}
/**
 * is_palindrome - Tests a string if palindrome
 * @s: String
 * Return: int (mean true).
 */
int is_palindrome(char *s)
{
int longeur;

longeur = lengh(s);
if (verif(0, longeur, s) == 0)
{
return (0);
}
return (1);
}
