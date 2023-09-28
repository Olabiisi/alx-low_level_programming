#include "main.h"

/**
 * sqrt_check - Helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n' if found, -1 otherwise.
 */
int sqrt_check(int n, int guess)
{
	/* Base case: If guess squared is equal to n, return guess. */
	if (guess * guess == n)
	return (guess);

	/* Base case: If guess squared is greater than n, return -1. */
	if (guess * guess > n)
	return (-1);

	/* Recursively increment guess and continue searching. */
	return (sqrt_check(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of 'n' if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	/* If n is negative, return -1 to indicate an error. */
	if (n < 0)
	return (-1);

	/* Start the search with an initial guess of 0. */
	return (sqrt_check(n, 0));
}
