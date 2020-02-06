#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, then in uppercase
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int m = 0;

	do {
		putchar(97 + n);
		n++;
	} while (n < 26);

	do {
		putchar(65 + m);
		m++;
	} while (m < 26);
	putchar(10);
	return (0);
}
