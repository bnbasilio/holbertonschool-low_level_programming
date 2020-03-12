#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the opcodes of its own main function
 *@argc: number of arguments passed to the function
 *@argv: array of arguments passed to the function
 *Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *opcode;

	bytes = atoi(argv[1]);
	opcode = (char *) main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes - 1; i++, opcode++)
	{
		printf("%02x ", *opcode);
	}
	printf("%02x\n", *opcode);
	return (0);
}
