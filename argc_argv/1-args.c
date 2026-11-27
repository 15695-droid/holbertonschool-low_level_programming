#include <stdio.h>
#include <stdarg.h>

/**
 * main - prints number of arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
if (argv == NULL)
return (1);

printf("%d\n", argc - 1);

return (0);
}
