#include "holberton.h"
/**
 * print_line - prints _ n number of times
 * @n: number of times _ is printed
 * Return: none
 */
void print_line(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


