#include "lists.h"


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

	nouveau = malloc(sizeof(dlistint_t));
	if (h ==  NULL || nouveau == NULL)
	return (NULL);
	nouveau->n = n;
	if (idx == 0)
	{
		nouveau = add_dnodeint(h, n);
	}

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
	nouveau->next = tmp;
	nouveau->prev = tmp->prev;
	tmp->prev->next = nouveau;
	tmp->prev = nouveau;
	return (nouveau);

}
return (NULL);
}
