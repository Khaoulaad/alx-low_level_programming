#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the length
 *@s: string to check
 * Return: i
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
