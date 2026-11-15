#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_array - creates an array of chars
 * @size: number of elements
 * @c: initializes it
 *
 * Return: NULL if fails, otherwise *array
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == 0) 
return (NULL);

for (i = 0; i < size; i++)
array[i] = c; 

return (array);
}
