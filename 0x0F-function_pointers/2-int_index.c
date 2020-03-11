#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array of integers
 *@size: number of elements in the array
 *@cmp: pointer to a function that compares values
 *
 *Return: the index of the element for which cmp does not return 0, -1 if no
 *        element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (i == size)
			return (-1);
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

