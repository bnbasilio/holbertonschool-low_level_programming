#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int prevnum, num, sum, sum_even;

	prevnum = 1;
	num = 2;
	sum = prevnum + num;
	sum_even = 0 + num;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			sum_even += sum;
		}
		prevnum = num;
		num = sum;
		sum = prevnum + num;
	}
	printf("%ld\n", sum_even);
	return (0);
}

