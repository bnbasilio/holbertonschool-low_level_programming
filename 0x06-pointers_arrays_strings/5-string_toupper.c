#include "holberton.h"
/**
 **string_toupper - changes all lowercase letters of a string to uppercase
 *@s: string to be converted
 *Return: converted string
 */
char *string_toupper(char *s)
{
	char *ptr_s = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (ptr_s);
}

