#include "function_pointers.h"
/**
 *array_iterator - prints an array
 *@array: array of integers
 *@size: size of the array
 *@action: function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
