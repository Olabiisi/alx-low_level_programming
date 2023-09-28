#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
	/* Base case: Factorial of 0 is 1. */
	if (n == 0)
	return (1);

	/* If 'n' is negative, return -1 to indicate an error. */
	if (n < 0)
	return (-1);

	/* Recursively calculate the factorial for positive 'n'. */
	return (n * factorial(n - 1));
}
