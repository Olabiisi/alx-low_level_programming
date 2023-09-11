#include <stdio.h>

/**
* main - Entry point
*
* Description: This program prints all hexadecimal numbers (0-9 and a-f)
*              in lowercase, followed by a newline character.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n');

return (0);
}
