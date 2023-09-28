#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 to indicate an error. */
	if (y < 0)
	return (-1);

	/* Base case: If y is 0, the result is 1. */
	if (y == 0)
	return (1);

	/* Recursively calculate the power for positive y. */
	return (x * _pow_recursion(x, y - 1));
}
