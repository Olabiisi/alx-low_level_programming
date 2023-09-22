#include "main.h"

/**
* leet - Encodes a string into 1337
* @str: The input string
*
* Return: Pointer to the modified string.
*/
char *leet(char *str)
{
char leet[] = "aAeEoOtTlL";
char replace[] = "4433007711";

int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; leet[j]; j++)
{
if (str[i] == leet[j])
{
str[i] = replace[j];
break;
}
}
}

return str;
}
