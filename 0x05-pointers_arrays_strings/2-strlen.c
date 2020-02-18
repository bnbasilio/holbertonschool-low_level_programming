#include "holberton.h"
/**
 *_strlen - returns the length of a string
 *@s: string input
 *Return: length of string input
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

