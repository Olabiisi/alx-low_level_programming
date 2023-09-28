#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: If we've reached the end of the string, return. */
	if (*s == '\0')
		return;

	/* Recursively call _print_rev_recursion with the rest of the string. */
	_print_rev_recursion(s + 1);

	/* Print the current character after the recursive call to reverse it. */
	_putchar(*s);
}
