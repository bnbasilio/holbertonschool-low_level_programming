#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			high = mid - 1;

		else if (array[mid] < value)
			low = mid + 1;
	}
	return (-1);
}

/**
 * print_subarray - print subarray between two indexes
 * @array: the subarray to print
 * @low: start index
 * @high: end index
 */
void print_subarray(int *array, size_t low, size_t high)
{
	size_t n;

	printf("Searching in array: ");
	for (n = low; n < high; n++)
		printf("%d, ", array[n]);
	printf("%d\n", array[n]);
}
