#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - fonction pour remplir un tab avec des fonctions
 * @array: int
 *@action: fonction
 * @size: size_t
 * return: nothing(mean true)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int a = 0;

for (a; a < size; a++)
action(array[a]);
}
