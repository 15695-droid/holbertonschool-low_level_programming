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

do 
{
    choice = 0;
    printf("Welcome to Simple Calculator!\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
    printf("Choice: ");
    scanf("%c", &choice);

    switch (choice)
    {
    default: 
        printf("Please enter a number from the menu.\n");
        break;
    case '0':
        printf("Bye!\n");
        break;
    case '1':
        printf("Addition: Choose numbers to Add\n");
        printf("Choose number A\n");
        scanf("%f", &A);
        printf("Choose number B\n");
        scanf("%f", &B);
        printf("The result is: %f\n", A + B);
        break;
    case '2':
        printf("Subtraction: Choose numbers to Subtract\n");
        printf("Choose number A\n");
        scanf("%f", &A);
        printf("Choose number B\n");
        scanf("%f", &B);
        printf("The result is: %f\n", A - B);
        break;
    case '3':
        printf("Multiplication: Choose numbers to Multiply\n");
        printf("Choose number A\n");
        scanf("%f", &A);
        printf("Choose number B\n");
        scanf("%f", &B);
        printf("The result is: %f\n", A * B);
        break;
    case '4':
        printf("Division: Choose numbers to Divide\n");
        printf("Choose number A\n");
        scanf("%f", &A);
        printf("Choose number B\n");
        scanf("%f", &B);
        if(B == 0)
            {
            printf("can't divide by zero\n");
            break;
            }
        printf("The result is: %f\n", A/B);
        break;
    }
    } 
while (choice != '0');

return 0;
}
