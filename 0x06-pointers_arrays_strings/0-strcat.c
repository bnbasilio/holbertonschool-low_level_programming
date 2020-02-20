#include "holberton.h"
/**
 **_strcat - concatenates two strings
 *@dest: string as to which src is appended to
 *@src: string to be appended to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

