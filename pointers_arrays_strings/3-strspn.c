#include "main.h"

/**
 * _strspn - gets length of a prefix substring.
 * @s: the string.
 * @accept: acceptance set
 *
 * Return: bytes in prefix of s which are from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
int found;

while (s[i] != '\0')
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found == 0)
break;
i++;
}
return (i);
}
