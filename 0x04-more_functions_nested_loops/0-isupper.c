#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= A && c <= Z) /* Use single quotes around A and Z */
        return (1);
    else
        return (0);
}
