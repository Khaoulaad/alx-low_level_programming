#include "main.h"

/**
 * _puts_recursion - prints a string
 *@s: string to be printed
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
_putchar(*s);
_puts_recursion(s+1);
_putchar('\n');
return 0;