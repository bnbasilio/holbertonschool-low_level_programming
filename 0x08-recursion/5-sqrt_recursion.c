#include "holberton.h"
/**
 *sqrt_rec - calculates the square root of numbers 2 and larger
 *@n: number whose square root needs to be calculated
 *@sqrt: possible square root
 *Return: natural square root of n, -1 otherwise
 */
int sqrt_rec(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	return (sqrt_rec(n, sqrt + 1));
}
/**
 *_sqrt_recursion - calculates the natural square root of a number
 *@n: number whose square root needs to be calculated
 *Return: natural square root of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 0));
}

