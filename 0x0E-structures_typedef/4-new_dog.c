#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calcule - calcule de taille
 * @ch: char
 * Return: int.
 */
int calcule(char *ch)
{
int i = 0;
while (ch[i] != '\0')
i++;
return (i);
}
/*
 * new_dog - create new dog
 * @name : int
 * @age : int
 * @owner : int
 * Return: 0(mean true)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int lname = 0, lowner = 0, i = 0;

dog_t *d = malloc(sizeof(dog_t));
if (d != '\0')
{
lname = calcule(name);
lowner = calcule(owner);
d->name = malloc(sizeof(char) * lname);
if (d->name == '\0')
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * lowner);
if (d->owner == NULL)
{
free(d);
return (NULL);
}
d->age = age;
while (i <= lname)
{
d->name[i] = name[i];
i++;
}
i = 0;
while (i <= lowner)
{
d->owner[i] = owner[i];
i++;
}
return (d);
}
else
return (NULL);
}
