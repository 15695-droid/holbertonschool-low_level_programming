#include "main.h"
#include <stdlib.h>

/*
 * array_range - creates a range of array
 * @min: least value
 * @max: maximum value
 *
 * Return: *array
 */
int *array_range(int min, int max)
{
int *array;
int i;
int range;

if (min > max)
return (NULL);

range = max - min + 1;

array = malloc(range *sizeof(int));
if (array == 0)
return (NULL);

for (i = 0; i < range; i++)
array[i] = min + i;

return (array);
}
