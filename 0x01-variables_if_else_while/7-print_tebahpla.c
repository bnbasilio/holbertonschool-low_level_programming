#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int n = 0;

	do {
		(putchar(122 - n));
		n++;
	} while (n < 26);
	putchar(10);
	return (0);
}

