1.
#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for capital letters.
 *
 * Return: 1 if successful otherwise 0.
 */
int _isupper(int c)
{
if (c>='A' && c<='Z')
{
return(1);
}
return(0);
}
