#include "holberton.h"

/**
 * is_prime_number - montrer si  lentier en parametre est premier
 * @n: int.
 * Return: int(mean true).
 */
int premier(int comp, int n)
{
if (n < 1)
{
return (0);
}
else if (comp >= n)
{
return (1);
}
if (n % comp != 0)
{
comp++;
return (premier(comp, n));
}
}
int is_prime_number(int n)
{
if (n == 2 || n == 3)
{
return (1);
}
else
return (premier(3, n));
}		
