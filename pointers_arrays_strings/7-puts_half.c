Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);

If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_strng + 1) / 2

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

for (i = length / 2; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
