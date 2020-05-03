#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Print list elemennt
 * @h: dlistint_t
 * Return: int(mean true)
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}