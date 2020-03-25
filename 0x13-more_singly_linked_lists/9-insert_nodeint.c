#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert inode in fix position
 * @head : listint_t
 * @n : int
 * @idx : int
 * Return: listint_t(mean true)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *tmp;
unsigned int i = 0;
tmp = *head;
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
if (head == NULL && idx != 0)
return (NULL);
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (tmp != NULL)
{
tmp = tmp->next;
i++;
}
if (i < idx)
return (NULL);
else
{
tmp = *head;
i = 0;
while (i < idx - 1)
{
tmp = tmp->next;
i++;
}
new->n = n;
new->next = tmp->next;
tmp->next = new;
return (new);
}
}
