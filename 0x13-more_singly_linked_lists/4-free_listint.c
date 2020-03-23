#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - free list
 * @head: list
 * Return: nothing(mean true)
 */

void free_listint(listint_t *head)
{
listint_t *l;

while (head != NULL)
{
l = head;
head = head->next;
free(l);
}
}
