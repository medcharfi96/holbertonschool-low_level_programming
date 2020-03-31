#include "holberton.h"

/**
 * create_file - fonction to new file
 * @filename: char
 * @text_content: char
 * Return: int(meantrue)
 */

int create_file(const char *filename, char *text_content)
{
int fichier, fichier2, count = 0;

if (filename == NULL)
return (-1);
fichier = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fichier == -1)
return (-1);
if(text_content != NULL)
{
while (text_content[count] != '\0')
count++;
fichier2 = write(fichier, text_content, count);
if (fichier2 != -1)
return (1);
}
return (-1);
}
