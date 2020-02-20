#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: an array of integers
 *@n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *b = a;
	int c;

	b += n - 1;
	while (b > a)
	{
		c = *a;
		*a = *b;
		*b = c;
		b--;
		a++;
	}
}

