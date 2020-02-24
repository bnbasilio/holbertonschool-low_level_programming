#include "holberton.h"
/**
 *_memset - fills the first n bytes of memory with constant b
 *@s: pointer of memory area to be filled
 *@b: constant byte filler
 *@n: byte of memory area to be filled with b
 *Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
