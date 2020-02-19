#include "holberton.h"
/**
 *puts_half - prints the second half of a string
 *@str: input string
 */
void puts_half(char *str)
{
	int count;
	char *beg = str;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	count += 1;
	beg += count / 2;
	while (*beg)
	{
		_putchar(*beg);
		beg++;
	}
	_putchar('\n');
}

