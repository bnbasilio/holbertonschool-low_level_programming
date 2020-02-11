#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar('a' + n);
	}
	_putchar ('\n');
}

