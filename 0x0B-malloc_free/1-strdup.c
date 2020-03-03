#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
/**
 *strdup - returns a pointer to the copy of the string used as parameter
 *@str: string to be copied
 *
 *Return: a pointer to the newly allocated memory space of a string's copy
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str != NULL)
	{
		s = malloc(sizeof(_strlen(str) + 1));
		/*if (str == NULL)
			return (NULL);*/
		for (i = 0; str[i]; i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
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

