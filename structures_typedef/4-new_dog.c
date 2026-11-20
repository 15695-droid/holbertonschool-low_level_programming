#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function to make new dog using dog_t type
 * @name: name of dog
 * @age: age
 * @owner: who owns it
 *
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int i, namelen, ownerlen;

if (name == NULL || owner == NULL)
return (NULL);

for (namelen = 0; name[namelen] != '\0'; namelen++)
;

for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
;

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);

newdog->name = malloc(namelen + 1);
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}

newdog->owner = malloc(ownerlen + 1);
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}

for (i = 0; i <= namelen; i++)
newdog->name[i] = name[i];

for (i = 0; i <= ownerlen; i++)
newdog->owner[i] = owner[i];

newdog->age = age;

return (newdog);
}
