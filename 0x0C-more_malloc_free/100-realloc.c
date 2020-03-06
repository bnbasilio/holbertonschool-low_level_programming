#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated with a call to malloc
 *@old_size: size of the allocated space for ptr
 *@new_size: new size of the new memory block
 *
 *Return: pointer to allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(sizeof(char) * new_size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		arr[i] = *((char *)ptr + i);
	}
	free(ptr);
	return (arr);
}
