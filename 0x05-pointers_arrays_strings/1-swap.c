#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two int
 *@a: parameter one
 *@b: parameter two
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
