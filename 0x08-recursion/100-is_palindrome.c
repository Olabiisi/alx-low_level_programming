#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: If the string has one or no characters, it's a palindrome. */
	if (start >= end)
	return (1);

	/* Check if the characters at 'start' and 'end' are equal. */
	if (s[start] != s[end])
	return (0);

	/* Recursively check the remaining substring. */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	/* Empty string is a palindrome. */
	if (len == 0)
	return (1);

	return (is_palindrome_recursive(s, 0, len - 1));
}
