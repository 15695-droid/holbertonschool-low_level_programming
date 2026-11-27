#include <stdio.h>

/**
 * main - print every argument
 * @argc: argumnent counter
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char **argv)
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
