#include"holberton.h"

/**
* print_chessboard - fonction affichage de chess
* @a: char.
*
* Return: nothing(mean true)
*/
void print_chessboard(char (*a)[8])
{
int i;
int j;

i = 0;
j = 0;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
