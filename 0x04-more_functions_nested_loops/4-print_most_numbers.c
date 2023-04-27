#include "main.h"

/**
 * print_most_numbers - print numbers from zero to nine except two and four
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int a;
a = 0;
{
if (a >= '0' && a < '2' && a >= '3' && a < '4' && a <= '9')
_putchar(a);
}
putchar ('\n');
}
