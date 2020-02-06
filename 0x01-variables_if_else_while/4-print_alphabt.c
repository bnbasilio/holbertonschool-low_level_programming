#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet, except q and e, in lowercase
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 26; x++)
	{
		if (x != 4 && x != 16)
			putchar(97 + x);
	}
	putchar(10);
	return (0);
}

