#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *
 */
int main (void)
{
char choice;
float A;
float B;

printf("Welcome to Simple Calculator!\n");

printf("1) Add\n");
printf("2) Subtract\n");
printf("3) Multiply\n");
printf("4) Divide\n");
printf("0) Quit\n");
printf("Choice: ");
scanf("%c", &choice);

if (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '0')
printf("Invalid choice\n");

if (choice == '0')
{
printf("Bye!\n");
return (0);
}

if (choice == '1')
{
printf("Addition: Choose numbers to Add\n");

printf("Choose number A\n");

scanf("%f", &A);

printf("Choose number B\n");

scanf("%f", &B);

printf("The result is: %f\n", A + B);
}

if (choice == '2')
{
printf("Addition: Choose numbers to Subtract\n");

printf("Choose number A\n");

scanf("%f", &A);

printf("Choose number B\n");

scanf("%f", &B);

printf("The result is: %f\n", A - B);
}

if (choice == '3')
{
printf("Addition: Choose numbers to Multiply\n");

printf("Choose number A\n");

scanf("%f", &A);

printf("Choose number B\n");

scanf("%f", &B);

printf("The result is: %f\n", A * B);
}

if (choice == '4')
{
printf("Addition: Choose numbers to Divide\n");

printf("Choose number A\n");

scanf("%f", &A);

printf("Choose number B\n");

scanf("%f", &B);

if(B == 0)
{
printf("can't divide by zero\n");
return (0);
}

printf("The result is: %f\n", A/B);
}

return 0;
}
