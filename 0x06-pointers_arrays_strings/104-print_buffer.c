#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 *
 * Description: This function prints the content of a buffer in a specified
 * format: 10 bytes per line, showing both the hexadecimal values and the
 * corresponding characters (or dots for non-printable characters).
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = i; j < i + 10; j++)
        {
            if (j < size)
                printf("%02x", b[j]);
            else
                printf("  ");

            if (j % 2 != 0)
                printf(" ");
        }

        for (j = i; j < i + 10; j++)
        {
            if (j < size)
            {
                if (b[j] >= 32 && b[j] <= 126)
                    printf("%c", b[j]);
                else
                    printf(".");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
