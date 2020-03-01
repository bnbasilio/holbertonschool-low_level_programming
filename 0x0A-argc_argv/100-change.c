#include <stdio.h>
#include <stdlib.h>
int get_change(int n);
/**
 *main - prints the minimum number of coins to make change for a certain amount
 *@argc: number of arguments passed to the program
 *@argv: array of arguments passed to the program
 *
 *Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int total_amt;

	if (argc == 2)
	{
		total_amt = atoi(argv[1]);
		if (total_amt > 0)
		{
			printf("%d\n", get_change(total_amt));
			return (0);
		}
		printf("0\n");
		return (0);
	}
	printf("Error\n");
	return (1);
}

/**
 *get_change - calculates the minimum number of coins to make change
 *@n: total amount of money
 *Return: minimum number of coins
 */
int get_change(int n)
{
	int coins;

	coins = 0;
	while (n > 24)
	{
		coins++;
		n -= 25;
	}
	while (n > 9)
	{
		coins++;
		n -= 10;
	}
	while (n > 6)
	{
		coins++;
		n -= 5;
	}
	while (n > 1)
	{
		coins++;
		n -= 2;
	}
	while (n > 0)
	{
		coins++;
		n -= 1;
	}
	return (coins);
}
