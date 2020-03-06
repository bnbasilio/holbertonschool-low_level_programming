#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: bytes of s2 we are using
 *
 *Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	if (n >= s2len)
		n = s2len;
	str = malloc(sizeof(char) * (s1len + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
/**
 *_strlen - counts the characters of a string
 *@s: string to be scanned
 *Return: length of the string
 */
int _strlen(char *s)
{
	unsigned int length, i;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	return (length);
}

