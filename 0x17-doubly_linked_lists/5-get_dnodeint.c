#include "lists.h"

/**
* get_dnodeint_at_index - print inode  given in index
* @head : dlistint_t
* @index: INT
* Return: dlistint_(tete de lindex)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head != NULL)
{
while (head->next != NULL)
{
if (count < index)
{
count++;
head = head->next;
}
else
break;
}
}
else
return (NULL);
return (head);
}
