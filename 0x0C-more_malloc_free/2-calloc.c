#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array and sets memory to 0
 *@nmemb: number of elements
 *@size: number of bytes for each element
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
