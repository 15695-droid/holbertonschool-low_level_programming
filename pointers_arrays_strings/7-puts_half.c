#include "main.h"
/**
 * puts_half - print second half of string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
length++;

for (i = (length + 1) / 2; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
