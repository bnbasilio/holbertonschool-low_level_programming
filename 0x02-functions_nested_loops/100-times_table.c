#include "holberton.h"
#include <unistd.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: maximum multiplier in the times table
 * Return: none
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b == 0)
				{
					_putchar('0');
				}
				else if (c < 10)
				{
					_putchar(',');
					write(1, "   ", 3);
					/*_putchar(' ');
					_putchar(' ');
					_putchar(' ');*/
					_putchar('0' + c);
				}
				else if (c < 100 && c >= 10)
				{
					_putchar(',');
					write(1, "  ", 2);
					/*_putchar(' ');
					_putchar(' ');*/
					_putchar('0' + c / 10);
					_putchar('0' + c % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + c / 100);
					_putchar('0' + (c % 100) / 10);
					_putchar('0' + c % 10);
				}
				if (b == n)
				{
					_putchar('\n');
				}
			}
		}
	}
}

