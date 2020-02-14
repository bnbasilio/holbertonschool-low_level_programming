#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: how tall the triangle is
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

