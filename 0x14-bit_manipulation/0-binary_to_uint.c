#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert from binary to decimal
 * @b: string to be converted
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int lengh = strlen(b);
	int total = 0;
	int decval = 1;

	if (b == NULL)
		return (0);

	for (i = (lengh - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += decval;
			decval *= 2;
		}
		else if (b[i] == '0')
		{
			decval *= 2;
		}
		else
			return (0);
	}
	return (total);
}
