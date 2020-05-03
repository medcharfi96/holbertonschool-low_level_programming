#include "lists.h"

/**
 * sum_dlistint - Summe of the liste
 * @head: dlistint_t
 * Return: int(meean true)
 */
int sum_dlistint(dlistint_t *head)
{
	int somme;

	somme = 0;
	while (head != NULL)
	{
		somme = somme + head->n;
		head = head->next;
	}
	return (somme);
}