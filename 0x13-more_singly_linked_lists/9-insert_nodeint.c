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
  itm = malloc(sizeof(listint_t));
  int i = 0, verif = 0;

  while (head != NULL)
    {
      i++;
      if (i == idx)
	{
	  verif = 1;
	  break;
	}
      head = head->next;
    }
  if (verif == 0)
    return (NULL);
  else
    {
      if (itm == NULL)
	{
	  return (NULL);
	}
      new->n = n;
      for (i =0; i<= idx; i++)
	head= head->next;
      new->next = head->next;
      head->next=new;
    }
  return(head);
}
