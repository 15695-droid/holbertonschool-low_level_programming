#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
int length;
int i;
char temp;
int length = 0;

while (s[length] != '\0')
length++;

for (i = 0; i < length / 2; i++)
{
temp = s[i]; hel
s[i] = s[length - 1 - i]; loo
s[length - 1 - i] = temp; 
}
}
