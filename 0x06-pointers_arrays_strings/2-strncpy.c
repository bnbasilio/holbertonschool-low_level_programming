#include "holberton.h"
/**
 **_strncpy - copies a string
 *@dest: string as to which src is copied to
 *@src: string to be copied to dest
 *@n: max number of characters to be used from src
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

