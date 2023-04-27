#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *@c: value to be checked
 * Return: 0 for uppercase 1 otherweise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
