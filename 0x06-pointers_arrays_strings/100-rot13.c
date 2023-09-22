#include "main.h"

/**
* rot13 - Encodes a string using ROT13
* @str: The input string
*
* Return: Pointer to the modified string.
*/
char *rot13(char *str)
{
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; input[j]; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
break;
}
}
}

return str;
}
