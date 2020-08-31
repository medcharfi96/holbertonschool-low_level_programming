#include "search_algos.h"
/**
 *linear_search - fonction de recherche de index
 *@array: INT
 *@size: size_t
 *@value: int
 *Return: int(mean true)
*/
int linear_search(int *array, size_t size, int value)
{
size_t count;
int val = 0;
if (array != NULL)
{
for (count = 0; count < size; count++)
{
val = (int)count;
printf("Value checked array[%d] = [%d]\n", val, array[val]);
if (array[count] == value)
return (count);
}
}
return (-1);
}
