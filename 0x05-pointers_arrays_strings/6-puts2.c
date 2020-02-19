#include "holberton.h"
/**
 *puts2 - prints every other character of a string, starting from 1st char
 *@str - input string
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str)
		{
			str++;
		}
	}
	_putchar('\n');
}

