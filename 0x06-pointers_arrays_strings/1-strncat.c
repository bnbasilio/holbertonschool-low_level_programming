#include "holberton.h"
/**
 **_strncat - concatenates two strings grabbing max of n characters from src
 *@dest: string as to which src is appended to
 *@src: string to be appended to dest
 *@n: max number of characters to be used from src
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;

	i = 0;
	j = 0;
	m = 0;
	while (dest[i])
	{
		i++;
	}
	for (m = 0; m < n && src [j]; m++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

