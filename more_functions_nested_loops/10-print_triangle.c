#include "main.h"

/**
 * print_traingle - prints triangle
 * @size: size of the triangle
 * 
 */
void print_triangle(int size)
{
int row, space, hash;

for (row = 0; row < size; row++)
{
for (space = 0; space < size - row; space++)
_putchar(' ')
}
for (hash = 0; hash < row; hash++)
{
_putchar('#')
}
_putchar('\n')
}
