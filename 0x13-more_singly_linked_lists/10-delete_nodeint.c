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
unsigned int i = 0;
listint_t *tmp, *prov = NULL;

tmp = *head;
if (head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
free(tmp);
return (1);
}
while (tmp != NULL)
{
i++;
tmp = tmp->next;
}
if (index < i)
{
i = 0;
while (i < index -1)
{
i++;
tmp = tmp->next;
prov = tmp;
}
prov ->next = tmp->next;
free(tmp);
return(1);
}
else 
return (-1);
}
