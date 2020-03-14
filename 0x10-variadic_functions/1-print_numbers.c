#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print number with the choosen separator
 * @n: int
 * @separator: char
 * Return: nothing(mean true)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
const char *a = separator;
unsigned int i = 0;

va_start(ap, n);
while (i < n)
{
printf("%d", va_arg(ap, unsigned int));
if (a == '\0')
i++;
else if (separator != NULL)
{
if ( i < n - 1)
printf("%s", separator);
i++;
}
}
printf("\n");
va_end(ap);
}
