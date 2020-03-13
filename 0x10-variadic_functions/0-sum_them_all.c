#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sums all of its parameters
 *@n: number of arguments
 *Return: sum of all parameters, excluding n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list nums;

	va_start(nums, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	return (sum);
}
