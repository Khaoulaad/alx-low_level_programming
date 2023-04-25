#include "main.h"

/**
 * print_sign - sign of an int
 *
 * Return: 0 for null, 1 for ngreater than zero or -1 for n negativ
 * @n : var to be checked5-sign.c
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar(0)
return (0);
}
if (n > 0)
{
_putchar(48)
return (1);
}
else
return (-1);
}
