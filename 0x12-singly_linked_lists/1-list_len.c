#include "lists.h"

/**
* list_len - give the lenght of list
* @h: list.
* Return: int(mean true)
*/
size_t list_len(const list_t *h)
{
size_t len = 0; 

if (h->next == NULL)
len += 1;
else
{
len++;
while (h->next != NULL)
{
h =  h->next;
len = len + 1;
}
}
return (len);
}
