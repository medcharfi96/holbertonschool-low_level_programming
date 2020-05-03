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
while (head != NULL)
{
if (count < index)
{
count++;
head = head->next;
}
else if (count == index)
return (head);
else
break;
}
}
else
return (NULL);
return (NULL);
}
