#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int n = 0;

	do {
		putchar(48 + n);
		n++;
	} while (n < 10);
	putchar(10);
	return (0);
}

