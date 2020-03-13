#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
/**
 *struct format - format specifiers and corresponding data type
 *@spec: format specifier
 *@type: data type associated
 */
typedef struct format
{
	char *spec;
	char *type;
} form_spec;

#endif /* VARIADIC_FUNCTIONS_H */
