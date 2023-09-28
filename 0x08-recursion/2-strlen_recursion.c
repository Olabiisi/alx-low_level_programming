#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: If we've reached the end of the string, return 0. */
	if (*s == '\0')
	return 0;

	/* Recursively call _strlen_recursion with the rest of the string. */
	return 1 + _strlen_recursion(s + 1);
}
