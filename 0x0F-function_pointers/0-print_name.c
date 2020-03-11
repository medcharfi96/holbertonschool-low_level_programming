#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char
 * @f: fonction
 * Return: 0(mean true)
 */
void print_name(char *name, void (*f)(char *))
{
if ((name) != '\0' && f != '\0')
f(name);
}
