#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if it is a digit
 *@c: value to be checked
 * Return: 1 for digit 0 otherweise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
