#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	double prevnum, num, sum;

	prevnum = 1;
	num = 2;
	printf("%.0f, %.0f, ", prevnum, num);
	count = 3;
	while (count < 99)
	{
		if (count < 99)
		{
			sum = prevnum + num;
			printf("%.0f", sum);
			prevnum = num;
			num = sum;
			count++;
			if (count < 99)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
	return (0);
}

