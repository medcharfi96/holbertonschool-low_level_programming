#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: dlistint_t
 * @n: int
 * Return: dlistint_t (mean true)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *nouveau;
nouveau = malloc(sizeof(dlistint_t));
if (nouveau == NULL)
return (NULL);

nouveau->n = n;
nouveau->next = (*head);
nouveau->prev = NULL;
if (*(head) != NULL)
{
(*head)->prev = nouveau;
}
(*head) = nouveau;
return (*head);
}