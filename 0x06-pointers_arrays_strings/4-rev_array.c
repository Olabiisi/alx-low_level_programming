#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers
* @a: Pointer to the first element of the array
* @n: Number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
/* Swap elements at position i and (n - i - 1) */
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
