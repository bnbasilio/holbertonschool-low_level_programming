#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes it with a character
 *@size: size of the array
 *@c: character initialized in the array
 *
 *Return: a pointer to the initialized array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size != 0)
	{
		str = malloc(sizeof(char) * size);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
	return (NULL);
}


