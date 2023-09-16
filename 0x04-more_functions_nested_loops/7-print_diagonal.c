#include "main.h"

/**
 * print_diagonal - prints a diagonal line with '\' character
 * @n: number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
    int i, j;

    if (n <= 0)
    {
        _putchar('\n');  /* Print a newline and return if n is 0 or negative */
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' ');  /* Print spaces before the '\' */
        }
        _putchar('\');    /* Print the '\' character */
        _putchar('\n');    /* Print a newline to end the line */
    }
}
