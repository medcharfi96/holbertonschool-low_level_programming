#include "hash_tables.h"
/**
 *key_index - give the key
 *@key: char
 *@size: int
 *Return: long int(mean true)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size != 0)
	{
		idx = hash_djb2(key) % size;
		return (idx);
	}
	return (0);
}