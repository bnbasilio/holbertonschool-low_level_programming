#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s: string to be scanned
 *@c: character we are scanning for
 *Return: pointer to the first occurence of character c
 */
char *_strchr(char *s, char c)
{
	char *findc = s;

	while (*findc != c && *findc != '\0')
	{
		findc++;
	}
	return (findc);
}
