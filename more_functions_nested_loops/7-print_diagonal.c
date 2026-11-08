#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times diagonal need to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int space;

if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
