#include "holberton.h"
#include <math.h>
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: none
 */
void print_number(int n)
{
	int m, count, divisor, digit;

	if (-n == n / -1)
	{
		m = -n;
		_putchar('-');
		n = n / -1;
	}
	for (count = 0; n > 0; count++)
	{
		n = n / 10;
	}
	while (m > 0)
	{
		divisor = pow(10, (count - 1));
		digit = m / divisor;
		_putchar('0' + digit);
		m = m - (digit * divisor);
		count--;
	}
}

