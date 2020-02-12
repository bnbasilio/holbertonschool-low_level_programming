#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input integer
 * Return: last digit of the input integer
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = -last;
	}
	_putchar('0' + last);
	return (last);
}

