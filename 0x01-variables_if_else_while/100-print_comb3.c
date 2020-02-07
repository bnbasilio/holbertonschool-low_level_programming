#include <stdio.h>
/**
 * main - prints the numbers 00 to 99
 * Return: 0
 */
int main(void)
{
	int first = 0;
	int second  = 0;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			if (second > first)
			{
			putchar(48 + first);
			putchar(48 + second);
				if (first != 8 || second != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

