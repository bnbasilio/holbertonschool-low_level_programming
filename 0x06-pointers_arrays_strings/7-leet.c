#include "holberton.h"
/**
 **leet - encodes a string into 1337
 *@s: string to be encoded
 *Return: t (encoded string)
 */
char *leet(char *s)
{
	int i = 0;
	char *ptr_s = s;
	char *spec = "aAeEoOtTlL";
	char *replaceWith = "4433007711";

	while (*ptr_s)
	{
		for (i = 0; spec[i]; i++)
		{
			if (*ptr_s == spec[i])
			{
				*ptr_s = replaceWith[i];
			}
		}
		ptr_s++;
	}
	return (s);
}

