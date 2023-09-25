#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: The square matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];          /* Sum of the main diagonal elements */
        sum2 += a[i * size + (size - 1 - i)]; /* Sum of the secondary diagonal elements */
    }

    printf("%d, %d\n", sum1, sum2);
}
