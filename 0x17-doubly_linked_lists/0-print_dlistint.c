#include "lists.h"

/**
 * print_dlistint - Print list elemennt
 * @h: dlistint_t
 * Return: int(mean true)
 */
size_t print_dlistint(const dlistint_t *h)
{
int nbr;

nbr = 0;
if (h == NULL)
return (nbr);
else
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr++;
	}
}
return (nbr);
}