#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* get_nodeint_at_index - print the inod choosen
* @head: struct
* @index: int
* Return: listint_t(mean true)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = -1;

while (head != NULL)
{
i++;
if (i == index)
{
return (head);
}
head = head->next;
}
return (NULL);
}
