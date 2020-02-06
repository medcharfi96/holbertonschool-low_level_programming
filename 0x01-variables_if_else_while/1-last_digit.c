#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main help to get last number .
 * Return: 0 mean always true
 **/
int main(void)
{
int x, ld;
srand(time(0));
x = rand() - RAND_MAX / 2;
ld =x % 10;
printf("Last digit of %d is %d ",x, ld);
if (ld > 5)
{
printf("and is greater than 5\n");
}
else if (ld == 0)
{
printf("and is 0\n");
}
else if (ld < 6 && ld != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
