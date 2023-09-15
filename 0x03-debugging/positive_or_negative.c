#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints whether an integer is positive, zero, or negative
 * @i: the integer to check
 *
 * Return: no return value (void)
 */
void positive_or_negative(int i)
{
    if (i > 0)
    {
        printf("%d is positive\n", i);
    }
    else if (i == 0)
    {
        printf("%d is zero\n", i);
    }
    else
    {
        printf("%d is negative\n", i);
    }
}
