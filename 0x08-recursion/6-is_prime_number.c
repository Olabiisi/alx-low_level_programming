#include "main.h"

/**
 * is_prime_recursive - Helper function to check for prime number.
 * @n: The number to check for prime.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	/* Base cases */
	if (n <= 1)
	return (0); /* 0 and 1 are not prime numbers */
	if (divisor == 1)
	return (1); /* If we reach divisor 1 without finding a divisor, it's prime */

	/* Check if n is divisible by the current divisor */
	if (n % divisor == 0)
	return (0); /* If divisible, it's not prime */

	/* Recursively check with the next divisor */
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Start the recursion with n and n - 1 as the initial divisor */
	return (is_prime_recursive(n, n - 1));
}
