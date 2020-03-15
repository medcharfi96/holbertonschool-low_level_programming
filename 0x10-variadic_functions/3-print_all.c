#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print w yeddek
 * @format: idk
 * Return: nothing(mean true)
 */

void print_all(const char * const format, ...)
{
va_list al;
int i = 0;
char *sup = ", ", *s;
va_start(al, format);
while ((format != NULL) && (format[i] != '\0'))
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(al, int));
break;
case 'i':
printf("%d", va_arg(al, int));
break;
case 'f':
printf("%f", va_arg(al, double));
break;
case 's':
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", va_arg(al, char *));
break;
}
if (format[i + 1] != '\0' && (format[i] == 'i' || format[i] == 's' || format[i] == 'c' || format[i] == 'f'))
			printf("%s", sup);
i++;
}
printf("\n");
va_end(al);
}
