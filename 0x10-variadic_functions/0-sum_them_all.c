#include <stdarg.h>
/**
 * sum_them_all - sum the para
 * @n: int
 * Return: int(mean true)
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int somme = 0;
unsigned int i = 0;

if (n == 0)
return (0);
va_start(ap, n);
while (i < n)
{
somme += va_arg(ap, unsigned int);
i++;
}
va_end(ap);
return (somme);
}
