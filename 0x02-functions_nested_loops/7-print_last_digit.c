#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input integer
 * Return: last digit of the input integer
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
	_putchar('0' + n % 10);
	return (n % 10);
	}
	else
	{
	n = -n;
	_putchar('0' + n % 10);
	return (n % 10);
	}
}

