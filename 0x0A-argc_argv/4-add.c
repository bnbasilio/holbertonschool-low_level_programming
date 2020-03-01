#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: number of arguments passed to the program
 *@argv: array of arguments passed to the program
 *
 *Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum, num, i;
	char *check_int;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &check_int, 10);
			if (*check_int == '\0')
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
