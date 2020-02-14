#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @n: number of times \ should be printed
 * Return: none
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = size - 1; a <= size && a >= 0 ; a--)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < size - a; c++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

