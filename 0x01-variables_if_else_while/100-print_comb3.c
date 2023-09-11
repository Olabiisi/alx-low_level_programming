/**
* main - Entry point of the program
*
* Description: This program prints all possible different combinations
* of two digits in ascending order, with the digits being different.
*
* Return: Always 0 (Success)
*/
#include <stdio.h>

int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 <= 8; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar(digit1 + 48);
putchar(digit2 + 48);

if (digit1 != 8 || digit2 != 9)
{
putchar(44);
putchar(32);
}
}
}

putchar(10);

return (0);
}
