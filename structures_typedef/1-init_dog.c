#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialises variable of type struct dog
 * @dog: variable type
 * @name: name of dog
 * @age: age of dog
 * @owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;

}
