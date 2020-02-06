#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints whether the last digit of random number is greater than 5, is
 * 0 or less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int x; /*last digit*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, x);
	return (0);
}
