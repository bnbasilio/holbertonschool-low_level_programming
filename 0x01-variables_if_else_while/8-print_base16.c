#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int m = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);

	}

	for (m = 0; m < 6; m++)
	{
		putchar(97 + m);
	}
	putchar(10);
	return (0);
}

