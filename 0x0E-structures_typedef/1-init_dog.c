#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initialisation dog
 *@d: dog
 *@name: char
 *@age: flaot
 *@owner: char
 *return: nothing(mean true)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
