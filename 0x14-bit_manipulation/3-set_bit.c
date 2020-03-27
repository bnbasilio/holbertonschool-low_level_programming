#include "holberton.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer to binary number
 *@index: index of the bit we want to set to 1
 *
 *Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n |= 1 << index;
		return (1);
	}
	return (-1);
}
