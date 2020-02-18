#include "holberton.h"

/**
 * _atoi - calculate the number in string
 * @s: string
 * Return: int (resultat avec le signe consideré).
 */

int _atoi(char *s)
{
	int a;
	int res;
	int type = 1;

	a = 0;
	res = 0;
	while ((*(s + a) < '0' || *(s + a) > '9') && (*(s + a) != '\0'))
	{
		if (*(s + a) == '-')
		{
			type = type * (-1);
		}		
		a++;
	}
	while ((*(s + a) >= '0') && (*(s + a) <= '9'))
	{
		res = res * 10 + type * (*(s + a) - '0');
		a++;
	}
	return (res);
}
