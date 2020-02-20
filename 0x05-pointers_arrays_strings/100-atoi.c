#include "holberton.h"
/**
 *_atoi - converts a string to an integer
 *@s: string input
 *Return: integer after conversion
 */
int _atoi(char *s)
{
	int n, i;
	char *beg = s;

	n = 0;
	while (*s < '0' || *s > '9')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		s++;
	}
	s--;
	for (i = 1; *s >= '0' && *s <= '9'; i *= 10)
	{
		n += *s * i;
		s--;
	}
	while (s >= beg)
	{
		if (*s == '-')
		{
			n = -n;
			s--;
		}
		else
		{
			s--;
		}
	}
	return (n);
}

