#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    /* Base case: If we've reached the end of the string, print a newline. */
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    /* Print the current character and move to the next character. */
    _putchar(*s);

    /* Recursively call _puts_recursion with the rest of the string. */
    _puts_recursion(s + 1);
}
