#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: number of bytes to be allocated
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
