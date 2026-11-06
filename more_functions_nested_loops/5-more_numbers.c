#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
int r;
int i;

for (r = 0; r < 10; r++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
_putchar('0' + i / 10);
_putchar('0' + i % 10);
}
_putchar('\n');
}
}
