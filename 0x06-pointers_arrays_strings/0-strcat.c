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
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
