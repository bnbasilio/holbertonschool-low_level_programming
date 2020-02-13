#include "holberton.h"
/**
 * print_numbers - prints the numbers 0 to 9
 * Return: none
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}

