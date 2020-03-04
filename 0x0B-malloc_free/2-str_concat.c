#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: a pointer to the newly allocated memory space of string 1 + string 2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, length1, length2;

	length1 = 0, length2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
		length1++;
	}
	for (i = 0; s2[i]; i++)
	{
		length2++;
	}
	s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j]; i++, j++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}

