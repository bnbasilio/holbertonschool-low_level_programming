#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: string to be scanned
 *Return: length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *palindrome_recursive - checks substring of s if palindrome
 *@s: string to be scanned
 *@start: beginning of substring
 *@end: end of substring
 *Return: 1 if palindrome, 0 otherwise
 */
int palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	if (start < end + 1)
		return (palindrome_recursive(s, start + 1, end - 1));
	return (1);
}
/**
 *is_palindrome - checks if a string is a palindrome or not
 *@s: string to be checked
 *Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	if (n == 0)
		return (1);
	return (palindrome_recursive(s, 0, n - 1));
}

