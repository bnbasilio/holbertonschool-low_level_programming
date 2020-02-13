#include <stdio.h>
/**
 * main - computes and prints the sum of the multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int n, mod3, mod5, sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		mod3 = n % 3;
		mod5 = n % 5;
		if (mod3 == 0 || mod5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

