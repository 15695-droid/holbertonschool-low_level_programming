#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the elements
 * @size: the size
 *
 * Return: *allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

char *array = 0;
unsigned int i;
unsigned int j;

if (nmemb == 0 || size == 0)
return (NULL);

j = nmemb * size;

array = malloc(j);
if (array == 0)
return (NULL);

for (i = 0; i < j; i++)
array[i] = 0;

return (array);
}
