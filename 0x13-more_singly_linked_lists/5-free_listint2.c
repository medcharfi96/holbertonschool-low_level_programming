#include "lists.h"

/**
 * free_listint2 - free list
 * @head: tete de list
 * Return: nothing(mean true)
*/

void free_listint2(listint_t **head)
{
listint_t *l = NULL;
if (head != NULL)
{
while (*head != NULL)
{
l = *head;
*head = (*head)->next;
free(l);
}
*head = NULL ;
}
else
return;
}
