#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between INT_MIN and INT_MAX
    int n = rand();

    // Determine whether n is positive, zero, or negative
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
