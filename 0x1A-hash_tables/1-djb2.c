#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm
 * @str: string
 *
 * Return: int(mean true)
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh = 5381;
	int ch;

	while ((ch = *str++))
	hsh = ch + ((hsh << 5) + hsh);
	return (hsh);
}