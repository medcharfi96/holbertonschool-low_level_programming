#include "lists.h"
#include <string.h>

/**
 * add_nodeint - add a string in the begining
 * @head: pointer
 * @n: int
 * Return: list(mean true)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nouveau = malloc(sizeof(listint_t));

if (nouveau == NULL)
{
return (NULL);
}
else
{
nouveau->n = n;
nouveau->next = *head;
*head = nouveau;
}
return (nouveau);
}
