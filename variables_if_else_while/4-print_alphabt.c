#include <stdio.h>

/**
* main - print all the alphabet in lower case except q and e
*
* return: always 0 (success)
*/
int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c = c +1;
}
putchar('\n');
return (0);
}
