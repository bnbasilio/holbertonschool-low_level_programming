#include "holberton.h"
/**
 **_strcpy - copies the string pointed to by src to buffer pointed to by dest
 *@dest: target pointer
 *@src: source pointer
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
