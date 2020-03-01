#include <stdio.h>
#include <stdlib.h>
/**
 * main - addition des entiers.
 * @argc: int.
 * @argv : char.
 * Return: 0(mean true).
 */
int main(int argc, char  *argv[])
{
int i = 1;
int res;

res = 0;
for (i = 1; i < argc; i++)
{
if ((*argv[i] < 48 || *argv[i] > 57))
{
printf("Error\n");
return (1);
break;
}
else
{
res = res + atoi(argv[i]);
}
}
printf("%d\n", res);
return (0);
}
