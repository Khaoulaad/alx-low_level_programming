#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char t;
int i, lenght, lenght1;
lenght = 0;
lenght1 = 0;
while (s[lenght] != '\0')
{
lenght++;
}
lenght1 = lenght - 1;
for (i = 0; i < lenght / 2; i++)
{
t = s[i];
s[i] = s[lenght1];
s[lenght1--] = t;
}
}
