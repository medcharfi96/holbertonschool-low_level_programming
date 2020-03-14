#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string with the choosen separator
 * @separator: string
 * @n: int
 * Return: nothing(mean true)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
const char *a = separator;
unsigned int i = 0;
char *ch;

va_start(ap, n);
while (i < n)
{
ch = va_arg(ap, char *);
if (ch == '\0')
{
printf("(nil)");
i++;
}
else
{
printf("%s", ch);
if (a == '\0')
i++;
else if (separator != NULL)
{
if (i < n - 1)
printf("%s", separator);
i++;
}
}
}
printf("\n");
va_end(ap);
}
