#include "holberton.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	/* Declarations */
	unsigned long int mask, not_trailing;

	not_trailing = 0;
	mask = 1UL << 63;

	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			not_trailing = 1;
		}

		else if (not_trailing)
			_putchar('0');

		mask = mask >> 1;
	}
}
