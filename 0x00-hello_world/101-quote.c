#include "stdio.h"
#include "string.h"
#include "unistd.h"
/**
 * main - Entry point
 *
 * Return: toujours 1 (vrai )
 */
int main(void)
{
int xx;
xx = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
return (1);
}
