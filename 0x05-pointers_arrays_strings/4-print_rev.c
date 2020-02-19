#include "holberton.h"
/**
 *print_rev - prints a string in reverse
 *@s: input string to be reversed
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (count != 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}

