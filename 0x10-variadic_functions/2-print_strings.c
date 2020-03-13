#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_strings - prints strings
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 *Return: integers passed to the function separated by the separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n && n != 0; i++)
	{
		s = va_arg(strings, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
