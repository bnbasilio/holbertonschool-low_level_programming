#include "holberton.h"
/**
 * print_most_numbers - prints the numbers 0 to 9
 * Return: none
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		_putchar('0' + a);
	}
	_putchar('\n');
}

