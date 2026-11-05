#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
i = 'z';

while (i >= 'a')
{
putchar (i);
i = i - 1;
}
putchar ('\n');
return (0);
}
