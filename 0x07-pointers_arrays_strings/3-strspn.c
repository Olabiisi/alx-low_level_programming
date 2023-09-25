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
int match;

while (*s)
{
match = 0;
while (*accept)
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (!match)
break;
s++;
}

return count;
}
