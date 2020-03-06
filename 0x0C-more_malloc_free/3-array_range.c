#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: first element of the array
 *@max: last element of the array
 *Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++, min++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
