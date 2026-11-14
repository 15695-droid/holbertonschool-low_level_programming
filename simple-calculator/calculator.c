#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 *
 */
int main (void)
{
int choice;

printf("Welcome to Simple Calculator!\n");

printf("1) Add\n");
printf("2) Subtract\n");
printf("3) Multiply\n");
printf("4) Divide\n");
printf("0) Quit\n");
printf("Choice: ");
scanf("%d", &choice);

if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0)
{
printf("Invalid choice\n");
}

if (choice == 0)
printf("Bye!\n");

return 0;
}
