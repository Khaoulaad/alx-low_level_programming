#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenates two strings
 *@dest: first string
 *@src: string to be added, use max n bytes
 *@n: max bytes used by src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
