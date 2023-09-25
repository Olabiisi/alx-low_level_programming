/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s)
    {
        int match = 0;
        char *accept_ptr = accept; /* Create a separate pointer for iterating accept */

        while (*accept_ptr)
        {
            if (*s == *accept_ptr)
            {
                count++;
                match = 1;
                break;
            }
            accept_ptr++;
        }

        if (!match)
            break;
        s++;
    }

    return count;
}
