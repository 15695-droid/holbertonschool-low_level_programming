#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialises variable of type struct
 * @name: name of dog
 * @age: age of pet
 * @owner: owner
 * @d: the address
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
