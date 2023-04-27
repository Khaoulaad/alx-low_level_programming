#include "main.h"

/**
 * print_line - draw a line
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');
}
}
putchar ('\n');
}
