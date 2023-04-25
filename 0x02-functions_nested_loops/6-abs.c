#include "main.h"
#include <stdio.h>

/**
 * _abs - valeur absolue
 *
 * Return: valeur absolue
 *@n : value to be checked
 */
int _abs(int n)
{
if (n > 0)
{
int absval;
absval = n;
return (absval);
}
else
absval = -1 * n;
return (absval);
}
