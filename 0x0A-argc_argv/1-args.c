#include<stdio.h>
/**
 * main - print the number of arg
 * @argc: int nbr of arg
 * @argv: char array of arg
 * Return: 0(mean true).
 */
int main(int argc, char *argv[])
{
int i; 

if (argc == 1)
printf("%d\n", 0);
else
{
while (argv[i + 1] != '\0') 
i++;
}
printf ("%d\n", i);
return (0);
}

