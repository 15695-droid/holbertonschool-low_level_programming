#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc check
 * @b: size
 *
 * Return: * allocated memory
 */
void *malloc_checked(unsigned int b)
{

char *str;

str = malloc(b);

if (str == 0)
exit(98);

return (str);
}
