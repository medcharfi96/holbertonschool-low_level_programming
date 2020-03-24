#include "lists.h"

/**
 * insert_nodeint_at_index - insert inode in fix position
 * @head : listint_t
 * @n : int
 * @idx : int
 * Return: listint_t(mean true)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new;
listint_t *tmp;
tmp = *head;
if (tmp != NULL)
{
if (head == NULL)
return (NULL);
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
else
{
while(i - 1 < idx)
{
tmp = tmp->next;
i++;
}
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = tmp->next;
tmp->next = new;
return (new);
}
else 
return (NULL);
}
