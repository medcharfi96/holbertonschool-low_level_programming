#ifndef _DOG_H
#define _DOG_H
/**
* struct dog - structure od dog
* @name: char
* @age: float
* @owner: char
* Description: dog details
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
