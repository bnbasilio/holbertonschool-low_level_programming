#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: string to be scanned
 *Return: length of string s
 */
int _strlen_recursion(char *s)
{
	static int length = 0;

	if (*s)
	{
		length++;
		_strlen_recursion(s + 1);
	}
	return (length);
}

