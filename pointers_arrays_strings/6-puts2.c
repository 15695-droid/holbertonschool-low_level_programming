#include "main.h"

/**
 * puts2 - function to print every other character in the string, followed by a new line.
 * @str: string to be printed
 *
 * Return: returns void
 */
void puts2(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
