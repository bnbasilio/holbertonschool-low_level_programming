#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 26; m++)
		{
			_putchar('a' + m);
			if (m == 25)
			{
				_putchar('\n');
			}
		}
	}
}

