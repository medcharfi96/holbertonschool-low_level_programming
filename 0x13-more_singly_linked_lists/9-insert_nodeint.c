#include "lists.h"
#include <stdlib.h>
#include <string.h>
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
unsigned int i = 0;
listint_t *new;
listint_t *tmp;
tmp = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
if (tmp == NULL)
return (NULL);
else
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
while(i < idx - 1)
{
tmp = tmp->next;
i++;
}
}
new->n = n;
new->next = tmp->next;
tmp->next = new;
return (new);
}
}
