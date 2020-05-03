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

/**
 * insert_dnodeint_at_index - add ind in choosen pos
 * @h: dlistint_t
 * @idx: int
 * @n: int
 * Return: dlistint_t(mean true)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau, *tmp = *h;
	unsigned int i = 0;
	unsigned int len = dlistint_len(*h);

	nouveau = malloc(sizeof(dlistint_t));
	if (h ==  NULL || nouveau == NULL)
	return (NULL);
	nouveau->n = n;
	nouveau->next = nouveau->prev = NULL;
	if (idx == 0)
	{
	nouveau = add_dnodeint(h, n);
	return (nouveau);
	}
	if (len == 1  && idx == 1)
	{
	nouveau = add_dnodeint_end(h, n);
	return(nouveau);
	}
	for (i = 0; i  < idx; i++)
	{
		tmp = tmp->next;
	}

	if (tmp != NULL && i < len)
	{
	nouveau->next = tmp;
	nouveau->prev = tmp->prev;
	tmp->prev->next = nouveau;
	tmp->prev = nouveau;
	return (nouveau);
	}
if (len + 1 == idx )
{
nouveau = add_dnodeint_end(h, n);
return(nouveau);
}
return (NULL);
}
