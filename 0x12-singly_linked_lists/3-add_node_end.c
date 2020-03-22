#include "lists.h"

/**
 * add_node_end - add at the end of list
 * @head: struct
 * @str: string
 * Return: struct(mean true)
 */

list_t *add_node_end(list_t **head, const char *str)
{

    /* Création du nouvel élément */
    list_t *nouveau = malloc(sizeof(list_t));
    if (head == NULL || nouveau == NULL)
    {
        return(NULL);
    }
    nouveau->next = NULL;
    nouveau->str = strdup(str);
    while(nouveau->etat< 1 || nouveau->etat > 2);

    /* Insertion de l'élément a la fin de la liste */

    list_t *tmp = *head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = nouveau;
}
