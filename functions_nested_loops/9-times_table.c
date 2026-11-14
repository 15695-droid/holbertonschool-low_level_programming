#include "main.h"

/**
 * times_table -  prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int row;
int column;

for (row = 0; row < 10; row ++)
{
_putchar (row + '0');
if (row < 10)
{
_putchar (' ');
}

for (column = 0; column < 10; column ++)
{
_putchar (column + '0');
if (column < 10)
{
_putchar('\n');
}
}

{
_putchar(row * column);
}
}
}
