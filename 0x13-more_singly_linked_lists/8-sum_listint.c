#include "lists.h"

/**
 * sum_listint - get the summe of a list
 * @head : list head
 * Return: int (mean true)
 */

int sum_listint(listint_t *head)
{
int count;
if (head == NULL)
count = 0;
else
{
count = 0;
while (head != NULL)
{
count = count + head->n;
head = head->next;
}
}
return (count);
}
