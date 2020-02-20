#include "holberton.h"
/**
 **leet - encodes a string into 1337
 *@s: string to be encoded
 *Return: s (encoded string)
 */
char *leet(char *s)
{
	char *t = s;

	while (*s)
	{
		if (*s == 'a' || *s == 'A')
		{
			*s = '4';
		}
		else if (*s == 'e' || *s == 'E')
		{
			*s = '3';
		}
		else if (*s == 'o' || *s == '0')
		{
			*s = '0';
		}
		else if (*s == 't' || *s == 'T')
		{
			*s = '7';
		}
		else if (*s == 'l' || *s == 'L')
		{
			*s = '1';
		}
		s++;
	}
	return (t);
}

