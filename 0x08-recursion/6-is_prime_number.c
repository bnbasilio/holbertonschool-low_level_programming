#include "holberton.h"
/**
 *check_divisor - checks if n is divisible by divisor
 *@n: number to be checked
 *@divisor: checking if n is divisible by this number
 *Return: 0 if divisible, 1 otherwise
 */
int check_divisor(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);
	if (divisor > n / 2 && n % divisor != 0)
		return (1);
	return (check_divisor(n, divisor + 1));
}
/**
 *is_prime_number - checks if a number if prime
 *@n: number to be checked
 *Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		return (0);
	}
	return (check_divisor(n, 2));
}

