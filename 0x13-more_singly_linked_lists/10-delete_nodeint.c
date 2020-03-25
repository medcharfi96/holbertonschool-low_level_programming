#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node
 * @head: list
 * @index: int
 * Return: int(mean true)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0, x = 0;
listint_t *tmp, *prov = NULL;

tmp = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
while (tmp != NULL)
{
tmp = tmp->next;
i++;
}
if (index > i)
return (-1);

while (x < index)
{
x++;
prov = tmp;
tmp = tmp->next;
}
prov->next = tmp->next;
free(tmp);
return (1);
}

