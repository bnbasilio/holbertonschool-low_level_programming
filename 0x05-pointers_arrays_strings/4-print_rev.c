#include "holberton.h"
/**
 *print_rev - prints a string in reverse
 *@s: input string to be reversed
 */
void print_rev(char *s)
{
	int count, i;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}

