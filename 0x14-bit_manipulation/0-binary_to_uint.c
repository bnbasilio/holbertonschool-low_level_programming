#include "holberton.h"

/**
 *binary to uint - converts a binary number to an unsigned int
 *@b: pointer to a string of 0 and 1 chars
 *Return: the converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	/* Declarations */
	unsigned int num, exp, i, j, result;

	if (!b)
		return (0);

	/* check for chars not 0 or 1 and get length of string */
	for (exp = 0; b[exp]; exp++)
	{
		if (b[exp] < '0' || b[exp] > '1')
			return 0;
	}
	exp--;

	/* starting from end of string, calculate the number */
	for (i = 0, num = 0; exp != i - 1; exp--, b++)
	{
		if (*b == '0')
			result = 0;
		else if (*b == '1')
		{
			result = 1;
			j = exp;
			while (j)
			{
				result *= 2;
				--j;
			}
		}
		num += result;
	}

	return (num);
}
