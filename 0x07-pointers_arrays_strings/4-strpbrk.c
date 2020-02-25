#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to be scanned
 *@accept: characters we are scanning for
 *Return: number of bytes in string s that consists only of chars in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	s = '\0';
	return (s);
}
