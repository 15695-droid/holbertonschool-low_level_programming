#include <stdio.h>
#include <stdarg.h>

/**
 * main - prints its own name
 * @argv: argument vector
 * @argc: argument counter
 *
 * Return: int
 */
int main(int argc, char *argv[])
{

if (argc < 1)
return (1);

printf("%s\n", argv[0]);
return (0);
}
