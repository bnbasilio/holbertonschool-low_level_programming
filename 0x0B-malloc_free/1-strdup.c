#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
/**
 *_strdup - returns a pointer to the copy of the string used as parameter
 *@str: string to be copied
 *
 *Return: a pointer to the newly allocated memory space of a string's copy
 */
char *_strdup(char *str)
{
	char *s;
	int i, length;

	length = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}

