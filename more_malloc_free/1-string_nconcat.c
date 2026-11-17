#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concentrates s1, first n bytes of s2 and null terminator
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: *new_str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
char *new_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
;

for (len2 = 0; s2[len2] != '\0'; len2++)
;

if (n >= len2)
n = len2;

new_str = malloc((len1 + n + 1) * sizeof(char));
if (new_str == 0)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (i = 0; i < n; i++)
new_str[len1 + i] = s2[i]; 

new_str[len1 + n] = '\0';

return (new_str);
}
