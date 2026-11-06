#include "main.h"

/**
 * print_most_numbers - print 0-14 10 times.
 * followed by a new line
 */
void more_numbers(void)
{
int r;
int i;

for (r = 0; r < 10;r++)
{
for (i = 0; i <= 14; i++)
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
_putchar('\n');
}
