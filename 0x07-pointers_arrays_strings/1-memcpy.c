#include "holberton.h"
/**
 *_memcpy - copies n bytes from src to dest
 *@dest: where src is being copied to
 *@src: will be copied to dest
 *@n: number of bytes of memory area src to be copied to dest
 *Return: memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
