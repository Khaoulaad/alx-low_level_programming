#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 *@dest: first string
 *@src: string to be added
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
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
