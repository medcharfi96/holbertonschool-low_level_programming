#include "search_algos.h"
/**
 * binary_search - trouver lindice dans un tableau trié
 * @array: tab
 * @size: int
 * @value: int
 * Return: int(mean true)
 */
int binary_search(int *array, size_t size, int value)
{
size_t compere = size;
int g = 0, d = size;
if (size == 0 || !size || array == NULL)
return(-1);
if (value ==  array[size])
{
	printf("Searching in array: ");
	for (size_t i = 0; i < size + 1; i++)
	{
		printf("%d, ",  array[i]);
	}
	return(size);
}
while (g <= d)
{
compere = (compere + 1) / 2;
for (size_t i = g; (int)i < d + 1; i++)
{
printf("%d, ", array[i]);
}
if ((int)compere >value)
g = compere;
else if (value == array[compere])
return(compere);
else
d = compere;

}
return(-1);
}