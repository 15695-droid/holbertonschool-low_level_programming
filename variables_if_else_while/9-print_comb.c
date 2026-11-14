#include <stdio.h>

/**
 * main - print all single digits. separated by , followed by a space.
 *
 * Return: zero
 */
int main(void)
{
int i;

for (i=0; i <= 9; i++)
putchar(i + '0');
if (i < 9)
{
putchar (',')
putchar (' ')
}
putchar ('\n')
return (0);
}
