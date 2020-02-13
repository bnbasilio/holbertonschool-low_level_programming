#include "holberton.h"
/**
 * more_numbers - prints the numbers 0 to 14, 10 times
 * Return: none
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 10)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
			if (b == 14)
			{
				_putchar('\n');
			}
		}
	}
}

