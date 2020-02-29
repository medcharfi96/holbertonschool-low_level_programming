#include <stdio.h>
/**
 * main - function to prnt all the arg
 * @argc: int
 * @argv: char
 * Return: 0(mean true).
 */
int main(int argc __attribute__((unused)), char const *argv[])
{
int i;

i = 0;
while(argv[i] != '\0')
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
