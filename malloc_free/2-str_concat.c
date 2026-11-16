#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates s1 and s2
 * @s1: string one
 * @s2: string two
 *
 * Return: *s1s2
 */
char *str_concat(char *s1, char *s2)
{
int i, len1;
int j, len2;
char *new_str;

if (s1 == 0)
return (NULL);

if (s2 == 0)
return (NULL);

for (len1 = 0; s1[len1] != '\0'; len1++)
;

for (len2 = 0; s2[len2] != '\0'; len2++)
;

new_str = malloc((len1 + len2 + 1) * sizeof(char));
if (new_str == 0)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (j = 0; j <= len2; j++)
new_str[len1 + j] = s2[j];

return (new_str);
}
