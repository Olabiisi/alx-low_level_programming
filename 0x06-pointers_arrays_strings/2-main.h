#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char s1[98];
char *ptr;
int i;

for (i = 0; i < 98 - 1; i++)
{
s1[i] = *;
}
s1[i] = 0;
for (i = 0; s1[i] != 0; i++)
{
putchar(s1[i]);
}
putchar(n);

ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
for (i = 0; s1[i] != 0; i++)
{
putchar(s1[i]);
}
putchar(n);

for (i = 0; ptr[i] != 0; i++)
{
putchar(ptr[i]);
}
putchar(n);

ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
for (i = 0; s1[i] != 0; i++)
{
putchar(s1[i]);
}
for (i = 0; ptr[i] != 0; i++)
{
putchar(ptr[i]);
}
    
for (i = 0; i < 98; i++)
{
if (i % 10)
{
putchar( );
}
if (!(i % 10) && i)
{
putchar(n);
}
printf("0x%02x", s1[i]);
}
putchar(n);

return (0);
}
 printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
