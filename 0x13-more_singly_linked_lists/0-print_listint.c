#include "lists.h"

/**
 * print_listint - print the element of the list
 * @h: list
 * Return: size_t(mean true)
*/

size_t print_listint(const listint_t *h)
{
size_t count = 0;
int x = 0;

if (h == NULL)
{
return ('\0');
}
while (h)
{
x = h->n;
printf("%d\n", x);
h = h->next;
count++;
}
return (count);
}
