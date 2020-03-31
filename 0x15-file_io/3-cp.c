#include "holberton.h"
#include <stdio.h>
/**
 * eror_test - test
 * @erreur: int
 * @argv: array
 * Return: nothing(meantrue)
 */

void eror_test(int erreur, char *argv[])
{
if (erreur == 1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[erreur]);
exit(98);
}
if (erreur == 2)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[erreur]);
exit(99);
}
}

/**
 * copier - copier
 * @ff: int
 * @buffer: buff1
 * @ft: int
 * @argv: char
 */

void copier(int ff, char *buffer, int ft,  char *argv[])
{
int erreur, ecrire, lire;

while ((lire = read(ff, buffer, 1024)) > 0)
{
ecrire = write(ft, buffer, lire);
if (ecrire == -1)
{
erreur = 2;
eror_test(erreur, argv);
}
}
if (lire == -1)
{
erreur = 1;
eror_test(erreur, argv);
}
}
/**
 * close - close file
 * @ff: file to
 * @ft: file to
 * Return: nothing
 */
void xclose(int ff, int ft, char *argv[])
{
if (close(ff) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
exit(100);
}
if (close(ft) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
exit(100);
}
}
/*
 * main - function main
 * @argc: int
 * @argv: char
 * Return: int(mean true)
 */

int main(int argc, char *argv[])
{
int ff, ft;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
if (argv[1] == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
ff = open(argv[1], O_RDONLY);
ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
if (ff == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (ft == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
copier(ff, buffer, ft, argv);
xclose(ff, ft, argv);
return (0);
}
