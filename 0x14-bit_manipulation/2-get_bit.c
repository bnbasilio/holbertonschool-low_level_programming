#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number to be scanned
 *@index: index of the bit we want to return
 *
 *Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
		return ((n >> index) & 1);
	return (-1);
}
