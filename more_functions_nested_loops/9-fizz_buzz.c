#include <stdio.h>

/**
 * main - prints 1-100.for multiples of 3 prints fizz.for multiples of 5 prints buzz.multiple of both fizzbuzz. seperated by space. 
 * followed by a new line
 *
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i%15 == 0)
{
printf("FizzBuzz ");
}
else if (i%5 == 0)
{
printf("Buzz ");
}
else if (i%3 == 0)
{
printf("Fizz ");
}
else
{ 
printf("%d ",i);
}
}
printf("\n");
return (0);
}
