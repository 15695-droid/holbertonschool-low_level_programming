#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence of bytes
 * @s: source string
 * @accept: acceptable bytes
 *
 * Return: * to byte found, NULL if nothing found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (&s[i]);
}
}
i++;
}
return (NULL);
}
