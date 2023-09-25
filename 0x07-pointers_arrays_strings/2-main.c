#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l'); /* Call _strchr function */

    if (f != NULL)
    {
        printf("%s\n", f); /* Print the result */
    }
    return (0);
}
