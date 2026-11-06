#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number
 *
 * Return: the last digit.
 */
int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = -last;
_putchar('0' + last);
}
return (last);
}
