#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - add node  la fin
 * @head: dlistint_t
 * @n: INT
 * Return: dlistint_t(meantrue)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nouveau = malloc(sizeof(dlistint_t));
dlistint_t *lista;
if (nouveau == NULL)
{
	return (NULL);
}
nouveau->n = n;
nouveau->next = NULL;
if (*head == NULL)
{
*head = nouveau;
return (*head);
}
lista = (*head);
while (lista->next != NULL)
	{
		lista = lista->next;
	}
lista->next = nouveau;
nouveau->prev = lista;
return (nouveau);
}
