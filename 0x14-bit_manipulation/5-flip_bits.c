#include "holberton.h"

/**
 *flip_bits - returns the number of bits to be flipped to convert from
 *            one number to another
 *@n: first binary number
 *@m: second binary number
 *
 *Return: number of bits to be flipped to convert one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, n_xor_m;

	count = 0;
	n_xor_m = n ^ m;
	while (n_xor_m)
	{
		count += n_xor_m & 1;
		n_xor_m >>= 1;
	}
	return (count);
}
