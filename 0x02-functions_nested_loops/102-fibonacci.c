#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	long int prevnum, num, sum;

	prevnum = 1;
	num = 2;
	printf("%ld, %ld, ", prevnum, num);
	count = 2;
	while (count < 50)
	{
		if (count < 50)
		{
			sum = prevnum + num;
			printf("%ld", sum);
			prevnum = num;
			num = sum;
			count++;
			if (count < 50)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
	return (0);
}

