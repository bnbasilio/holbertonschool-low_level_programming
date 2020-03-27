#include "holberton.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: pointer to binary number
 *@index: index of the bit we want to set to 0
 *
 *Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
