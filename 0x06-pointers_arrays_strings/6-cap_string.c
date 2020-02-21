#include "holberton.h"
/**
 **cap_string - capitalizes all words of a string
 *@s: string to be converted
 *Return: converted string
 */
char *cap_string(char *s)
{
	int capNext;
	char *sep =	" \t\n,;.!?\"(){}";
	char *ptr_sep = sep;
	char *t = s;

	capNext = 1;
	while (*s)
	{
		if (capNext)
		{
			if (*s >= 'a' && *s <= 'z')
			{
				*s -= 32;
			}
		}
		for (ptr_sep = sep; *ptr_sep; ptr_sep++)
		{
			if (*s == *ptr_sep)
			{
				capNext = 1;
				break;
			}
			capNext = 0;
		}
		s++;
	}
	return (t);
}

