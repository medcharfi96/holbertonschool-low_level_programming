#include "holberton.h"
/**
 * *leet - compare to string.
 * @zab: string
 * Return: char (la comparaisrom).
 */
char *leet(char *zab)
{
char a[] ="aAeEoOtTlL";
char b[] ="4433007711";
int i = 0;
int j = 0;
for(i = 0 ; zab[i] != '\0'; i++)
{
for( j =0 ; a[j] != '\0' ; j++)
{
if ( zab[i] == a[j])
zab[i]=b[j];
}
} 
return(zab);
}
