#include "hash_tables.h"

/**
* hash_table_create - create hash table
* @size: unsigned long int
* Return: hash_table(mean true)
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *n_h_t = malloc(sizeof(hash_table_t));

if (n_h_t == NULL)
return (NULL);
n_h_t->size = size;
n_h_t->array = malloc(sizeof(hash_node_t *) * size);
if ((n_h_t->array) == NULL)
{
free(n_h_t);
return (NULL);
}
return (n_h_t);
}