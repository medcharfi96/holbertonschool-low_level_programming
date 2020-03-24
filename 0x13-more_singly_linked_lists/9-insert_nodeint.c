#include "lists.h"
/**
 * insert_nodeint_at_index - insert inode in fix position
 * @head : listint_t
 * @n : int
 * @idx : int
 * Return: listint_t(mean true)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *itm = malloc(sizeof(listint_t));
listint_t *tmp = *head;
unsigned int i = 0, verif = 0;

while (head != NULL)
{
i++;
if (i == idx)
{
verif = 1;
break;
}
tmp = tmp->next;
}
if (verif == 0)
return (NULL);
else
{
if (itm == NULL)
{
return (NULL);
}
itm->n = n;
for (i =0; i<= idx; i++)
tmp= tmp->next;
itm->next = tmp->next;
tmp->next= itm;
}
return(tmp);
}
