#include "main.h"
#include <stdio.h>

/**
 * string_toupper - string frm lower case
 * to uppercase
 *
 * Return: string .
 */
char *string_toupper(char *)
{
int i;
char *s;
i = 0
while (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
return (s);
}
