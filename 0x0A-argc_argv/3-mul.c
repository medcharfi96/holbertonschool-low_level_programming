#include <stdio.h>
#include <stdlib.h>
/**
 * main - operation of to int.
 * @argc: int.
 * @argv : char.
 * Return : 0(mean true).
 */
int main(int argc, char  *argv[])
{
int x;

x = 0;
if (argc == 3)
{
x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
