#include "hash_tables.h"
#include <string.h>
/**
* hash_table_print - akleazeazeae
* @ht: table
* Return: Nothing(trueeeeeeeeeeeeeeeeeeeeeeee)
*/

void hash_table_print(const hash_table_t *ht)
{
	int ze =  1;
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (ze == 1)
				{
					printf("'%s': '%s'", node->key, node->value);
				}
				else
				{
					ze = 0;
					printf(", ");
					printf("'%s': '%s'", node->key, node->value);
				}
				node = node->next;
			}
			i++;
		}
		printf("}\n");
	}
	return;
}