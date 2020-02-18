#include "holberton.h"
/**
 * swap_int - swap 2 int.
 * @a: int
 * @b: int
 * Return: nothing (mean true)
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
