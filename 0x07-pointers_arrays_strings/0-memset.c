#include "main.h"
#include <stdio.h>

/**
 * _memset - copies memory area
 * @s: pointer to the area
 * @b: constant byte
 * @n: numberof  bytes pointed
 * Return: b
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
