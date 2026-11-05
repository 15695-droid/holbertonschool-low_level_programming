#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char C;

c = 'a';
C = 'A';

    while (c <= 'z')
{
putchar(c);
c = c + 1;
}
    while (C <= 'Z')
{
putchar(C);
C = C + 1;
}
putchar('\n');
return (0);
}
