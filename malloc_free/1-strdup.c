#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates memory space and copies the given string in it
 * @str: string to be copied
 *
 * Return: *new_string
 */
char *_strdup(char *str)
{
int i, len;
char *new_string;

if (str == NULL)
return (NULL);

for (len = 0; str[len] != '\0'; len++)
;

new_string = malloc((len + 1) * sizeof(char));
if (new_string == 0)
return (NULL);

for (i = 0; i <= len; i++)
new_string[i] = str[i];

return (new_string);
}
