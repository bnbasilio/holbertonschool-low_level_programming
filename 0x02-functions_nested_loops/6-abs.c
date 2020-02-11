#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @abs: input integer
 * Return: absolute value of the input integer
 */
int _abs(int abs)
{
	if (abs > 0)
	{
		return (abs);
	}
	else if (abs < 0)
	{
		return (-abs);
	}
	else
	{
		return (0);
	}
}

