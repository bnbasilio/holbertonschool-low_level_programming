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
		(putchar(97 + n));
		n++;
	} while (n < 26);
	putchar(10);
	return (0);
}
