#include "holberton.h"

/**
 * premier - montrer si  lentier en parametre est premier
 * @n: int.
 * @comp: int ccompteur.
 * Return: int(mean true).
 */
int premier(int comp, int n)
{
if (n <= 1)
{
return (0);
}
else if (comp >= n)
{
return (1);
}
if (n % comp != 0)
return (premier(comp + 1, n));
else
return (0);
}
/**
 * is_prime_number - check the code.
 * @n: int.
 * Return: int mean true.
 */
int is_prime_number(int n)
{
if (n == 2 || n == 3)
{
return (1);
}
else
return (premier(3, n));
}
