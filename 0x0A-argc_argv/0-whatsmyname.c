#include <stdio.h>
/**
 *main - prints the program's name
 *@argc: number of arguments passed to the program
 *@argv: array of arguments passed to the program
 *
 *Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

