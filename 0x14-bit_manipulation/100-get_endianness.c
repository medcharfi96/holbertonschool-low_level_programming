#include "holberton.h"

/**
 * get_endianness - endianness
 * Return: int(mean true)
*/

int get_endianness(void)
{
unsigned int test;
char *ch;
int res;

test = 1;
ch = (char *) &test;
res = *(char *)&ch;
return (res);
}
