#include "main.h"
/**
 * _islower - returns one if lowercase else returns zero
 *
 * Return: 1 for lowercase character or 0 for  else.
 * @c : the value to check
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

