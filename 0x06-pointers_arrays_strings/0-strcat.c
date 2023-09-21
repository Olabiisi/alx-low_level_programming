#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer in `dest` to the end of the string */
    while (*dest != 0)
    {
        dest++;
    }

    /* Copy characters from `src` to `dest` */
    while (*src != 0)
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add the null terminator at the end */
    *dest = 0;

    return ptr;
}
