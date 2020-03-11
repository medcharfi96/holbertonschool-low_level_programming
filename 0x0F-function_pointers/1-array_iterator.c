#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - fonction pour remplir un tab avec des fonctions
 * @array: int
 * @action: fonction
 * @size: size_t
 * return: nothing(mean true)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a = 0;

for(a = 0; a < size; a++)
action(array[a]);
}
