#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - reverse list
 * @head : list
 * Return: list(mean true)
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t  *v1, *v2;
v1 = v2 = NULL;

if (*head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
while (*head != NULL)
{
v2 = (*head)->next;
(*head)->next = v1;
v1 = *head;
*head = v2;
}
*head = v1;
return (*head);
}
