#include "holberton.h"

/**
 * read_textfile - read the text
 * @filename: char
 * @letters: size_t
 * Return: size_t(meantrue)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int op;
char *buffer;
ssize_t a, b;
if (filename == NULL)
return (0);
op = open(filename, O_RDONLY);
if (op == -1)
return (0);
buffer = malloc (sizeof(char) * letters);
if (buffer == NULL)
return (0);
a = read(op, buffer, letters);
if (a == -1)
return (0);
b = write(STDOUT_FILENO, buffer, a);
if (b != -1)
{
close (op);
return (b);
}
return (0);
}
