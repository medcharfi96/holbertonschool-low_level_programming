#include "hash_tables.h"

/**
 * hash_table_get - show value with the key given
 * @ht: tabl
 * @key: char
 * Return: char(mean true)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *zab;

	if (ht == NULL || key == NULL)
	return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (idx == 0)
	return (NULL);
	zab = ht->array[idx];
	while (ht != NULL)
	{
		if (strcmp(zab->key, key) != 0)
		zab = zab->next;
		else
		return (zab->value);
	}
	return (NULL);
}