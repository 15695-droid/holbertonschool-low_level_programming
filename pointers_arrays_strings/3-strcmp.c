#include "main.h"
/**
 * _strcmp - compares s1 and s2
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: 0 if equal, + if s1 greater, - if s1 lesser.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0')
i++;

return (s1[i] - s2[i]);
}
