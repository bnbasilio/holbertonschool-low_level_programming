#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string to be scanned
 *@accept: characters we are scanning for
 *Return: number of bytes in string s that consists only of chars in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int in_accept;

	in_accept = 0;
	for (i = 0; s[i]; i++)
	{
		in_accept = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				in_accept = 1;
			}
		}
		if (in_accept != 1)
		{
			break;
		}
	}
	return (i);
}
