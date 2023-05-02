#include "main.h"

/**
 *  print_rev - updates the value of the variable
 * @s: pointer
 */
void print_rev(char *s)
{
int i, n;
while (s[i] != '\0')
{
for (i = 0; i <= n; i++)
{
s[i] = s[n - i];
_putchar(s[i]);
}
}
_putchar('\n');
}
