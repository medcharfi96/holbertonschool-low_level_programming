#include "hash_tables.h"

/**
* do_update - set function
* @ht: hash table
* @key: CHAR
* @value: char
* @idx: int
* Return: int(mean true)
*/


int do_update(hash_table_t *ht, const char *key,
		const char *value, long int idx)
{
	hash_node_t *tableau = ht->array[idx];

	while (ht->array[idx])
	if (strcmp(tableau->key, key) == 0)
	{
	free(tableau->value);
	tableau->value = strdup(value);
	return (1);
	}
	free(tableau);
	return (0);
}

/**
* check - set function
* @ht: hash table
* @key: CHAR
* @value: char
* Return: int(mean true)
*/

int check(hash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || ht == NULL)
	return (0);
	if (!value || !key[0])
	return (0);
	return (1);
}

/**
* hash_table_set - set function
* @ht: hash table
* @key: CHAR
* @value: char
* Return: int(mean true)
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	long int idx;
	hash_node_t *new_node = NULL;

	if (check(ht, key, value) == 1)
	{
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	do_update(ht, key, value, idx);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	return (0);
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		if (ht->array[idx] == NULL)
		{
			new_node->next = NULL;
			ht->array[idx] = new_node;
		}
		else
		{
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
		}
	}
	}
	return (0);
}