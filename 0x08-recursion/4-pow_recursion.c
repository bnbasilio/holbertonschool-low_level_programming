#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: base number
 *@y: power as to which x is being raised to
 *Return: x raised to the power of y, -1 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

