#include <stdio.h>
/**
 * main - prints the numbers 00 to 99
 * Return: 0
 */
int main(void)
{
	int first = 0;
	int second  = 0;

	for (first = 0; first < 100; first++)
	{
		for (second = 0; second < 100; second++)
		{
			if (first < second)
			{
			putchar(48 + first / 10);
			putchar(48 + first % 10);
			putchar(32);
			putchar(48 + second / 10);
			putchar(48 + second % 10);
				if (first != 98 || second != 99)
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

