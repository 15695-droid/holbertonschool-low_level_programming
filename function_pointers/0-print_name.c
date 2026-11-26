#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f:pointer to a function that takes a char * and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
