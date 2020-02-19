#include <stdio.h>
#include "holberton.h"
/**
 *print_array - prints n elements of an array of integers
 *@a: array to be printed
 *@n: number of elements in array
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", *a);
	}
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	putchar('\n');
}

