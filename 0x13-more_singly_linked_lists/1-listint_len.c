#include "lists.h"

/**
* listint_len - give the lenght of list
* @h: list
* Return: size_t(mean true)
*/

size_t listint_len(const listint_t *h)
{
size_t len = 0;

if (h == NULL)
len = 0;
else
{
len++;
while (h->next != NULL)
{
h = h->next;
len = len + 1;
}
}
return (len);
}
