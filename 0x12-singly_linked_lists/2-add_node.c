#include "lists.h"
#include <string.h>

/**
 * add_node - add a string in the begining
 * @head: pointer
 * @str: char
 * Return: struct(mean true)
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *nouveau = malloc(sizeof(list_t));
unsigned int count = 0;
int i = 0;
if (nouveau == NULL)
{
return (NULL);
}
else
{
if (str == NULL)
return (NULL);
else
{
while (nouveau->str[i] != '\0')
{
count++;
i++;
}
}
nouveau->len = count;
nouveau->str = strdup(str);
nouveau->next = *head;
*head = nouveau;
}
return (nouveau);
}
