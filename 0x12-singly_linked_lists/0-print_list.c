#include "lists.h"

/**
* print_list - prints all the list
* @h: list.
* Return: int(mean true)
*/

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[%d] %s\n", 0, "(nil)");
h = h->next;
count++;
}
return (count);
}
