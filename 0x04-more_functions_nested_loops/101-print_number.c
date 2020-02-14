#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: none
 */
void print_number(int n)
{
	int m, count, divisor, digit, i, j, x;

	i = 0;
	m = n;
	if (n < 0)
	{
		m = -n;
		_putchar('-');
		n = n / -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	for (count = 0; n > 0; count++)
	{
		n = n / 10;
	}
	/*while (m > 0)*/
	x = count;
	for (j = 0; j < x; j++)
	{
		divisor = 1;
		for (i = 0; i < (count - 1); i++)
		{
			divisor *= 10;
		}
		digit = m / divisor;
		_putchar('0' + digit);
		m = m - (digit * divisor);
		count--;
	}
}

