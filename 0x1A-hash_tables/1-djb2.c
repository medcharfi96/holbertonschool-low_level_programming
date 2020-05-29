#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh = 5381;
	int ch;

	while ((c = *str++))
	hsh = c + ((hsh << 5) + hsh);
	return (hsh);
}