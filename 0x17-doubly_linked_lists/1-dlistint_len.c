#include "lists.h"

/**
 * dlistint_len - Print lislenghtt elemennt
 * @h: dlistint_t
 * Return: int(mean true)
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nbr;

nbr = 0;
while (h != NULL)
{
h = h->next;
nbr++;
}
return (nbr);
}
