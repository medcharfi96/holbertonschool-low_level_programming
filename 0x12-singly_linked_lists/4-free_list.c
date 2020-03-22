#include "lists.h"
/**
 * free_list - free
 * @head: list
 *
 * Return: nothing(mean true)
 */
void free_list(list_t *head)
{
list_t *l = head;

while (l != NULL)
{
head = head->next;
free(l->str);
free(l);
}
}
