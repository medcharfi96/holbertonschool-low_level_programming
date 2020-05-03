#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node fron choosen index
 * @head: dlistint_t
 * @index: INT
 * Return: int(meant khraaaaaaaaaaa)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *vec;
unsigned int i = 0;
vec = *head;
if (vec == NULL)
return (-1);
if (index == 0)
*head = vec->next;
while (vec != NULL)
{
i++;
if (i == index)
{
if (i != 0)
vec->prev->next = vec->next;
if (vec->next != NULL)
vec->next->prev = vec->prev;
free(vec);
return (1);
}
vec = vec->next;
}
return (-1);
}
