#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint - eliminate first element
* @head: head list
* Return: int(mean true)
*/

int pop_listint(listint_t **head)
{
int res = 0;
listint_t *tmp = *head;

if (*head != NULL)
{
res = tmp->n;
*head = (*head)->next;
free(tmp);
}
return (res);
}
