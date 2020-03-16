#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list vars;
	char *s;
	int i = 0;
	int flag;

	while (format)
	{
		va_start(vars, format);
		while (format[i])
		{
			flag = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(vars, int));
				break;
			case 'i':
				printf("%d", va_arg(vars, int));
				break;
			case 'f':
				printf("%f", va_arg(vars, double));
				break;
			case 's':
				s = va_arg(vars, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				flag = 0;
				break;
			}
		if (format[i + 1] && flag)
			printf(", ");
		i++;
		}
		va_end(vars);
		break;
	}
	printf("\n");
}
