
#include "hash_tables.h"

/**
 * hash_table_delete - iuqssfsjkf
 * @ht: table
 * Return: noth(trrrrrrrrrrrrr)
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *bad;
	unsigned long int count = 0;
if (ht != NULL)
{
while (count < ht->size)
{
	node = ht->array[count];
	while (node != NULL)
	{
	bad = node->next;
	free(node->key);
	free(node->value);
	free(node);
	node = bad;
	}
}
	free(ht->array);
	free(ht);
}
return;
}