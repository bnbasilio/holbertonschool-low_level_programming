#include "holberton.h"
/**
 **rot13 - encodes a string using rot13
 *@s: string to be encoded
 *Return: s (encoded string)
 */
char *rot13(char *s)
{
	int i = 0;
	char *ptr_s = s;
	char *encodeThis = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *translateTo = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr_s)
	{
		for (i = 0; encodeThis[i]; i++)
		{
			if (*ptr_s == encodeThis[i])
			{
				*ptr_s = translateTo[i];
				break;
			}
		}
		ptr_s++;
	}
	return (s);
}

