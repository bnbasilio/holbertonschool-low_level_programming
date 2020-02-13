#include <stdio.h>
#include "holberton.h"
/**
 * main - prints 1 to 100, with some execeptions for multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int a, mod3, mod5;

	for (a = 1; a <= 100; a++)
	{
		mod3 = a % 3;
		mod5 = a % 5;
		if (mod3 != 0 && mod5 != 0)
		{
			printf("%d", a);
		}
		if (mod3 == 0 && mod5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (mod3 == 0)
		{
			printf("Fizz");
		}
		else if (mod5 == 0)
		{
			printf("Buzz");
		}
		if (a < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}

