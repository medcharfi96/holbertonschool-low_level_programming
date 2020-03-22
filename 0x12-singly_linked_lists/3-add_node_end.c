#include "lists.h"
#include <string.h>

/**
 * add_node_end - add at the end of list
 * @head: struct
 * @str: string
 * Return: struct(mean true)
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *nouveau = malloc(sizeof(list_t));
list_t *tmp = *head;
int i = 0;

if (nouveau == NULL)
{
return (NULL);
}
nouveau->next = NULL;
if (str != NULL)
{
while (str[i] != '\0')
{
i++;
}
}
else
return (NULL);
nouveau->len = i;
nouveau->str = strdup(str);
if (tmp == NULL)
{
*head = nouveau;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = nouveau;
}
return (*head);
}
