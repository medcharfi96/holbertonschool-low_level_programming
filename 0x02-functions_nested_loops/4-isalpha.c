#include "holberton.h"
/**
* main -show the world holberton followed by enter.
* @c :variable pour test
* Return : 1 (mean alhpa)
**/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0) ;
}
}
