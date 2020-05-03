#include "lists.h"
#include <stdio.h>

/**
* free_dlistint - free  the list
* @head : dlistint_t
* Return: nothing(mean true)
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

tmp = head;
while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
head = NULL;
}