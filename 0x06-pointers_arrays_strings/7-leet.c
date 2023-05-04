#include "main.h"
#include <stdio.h>

/**
 * leet - encode a string into onethreethreeseven
 *@s: string to encode
 * Return: string
 */
char *leet(char *s)
{
int i;
int j;
char *c = "aAeEoOtTlL";
char *d = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == c[j])
{
s[i] = d[j];
}
}
}
return (s);
}
