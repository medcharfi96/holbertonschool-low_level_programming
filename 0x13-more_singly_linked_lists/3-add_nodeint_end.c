#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - add at the end of list
 * @head: struct
 * @n: int
 * Return: struct(mean true)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nouveau = malloc(sizeof(listint_t));
listint_t *tmp = *head;

if (nouveau == NULL)
{
return (NULL);
}
else
{
nouveau->next = NULL;
nouveau->n = n;
if (tmp == NULL)
{
*head = nouveau;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = nouveau;
}
return (*head);
}
}
