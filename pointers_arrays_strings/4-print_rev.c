#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
int length = _strlen(*s);
int i;
for (i = length - 1; i >= 0; i--)
{
_putchar('%c'i);
}
_putchar('\n')
}
