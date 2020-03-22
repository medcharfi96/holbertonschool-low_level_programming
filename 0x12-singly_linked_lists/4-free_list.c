#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h> 
/**
 * free_list - free
 * @head: list
 *
 * Return: nothing(mean true)
 */

void free_list(list_t *head)
{
list_t *l = head;

while ((l = head) != NULL)
{
head = head->next;
free(l->str);
free(l);
}
}
