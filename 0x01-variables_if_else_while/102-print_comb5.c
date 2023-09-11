/**
* main - Entry point of the program
*
* Description: This program prints all possible different combinations
* of three digits in ascending order, with the digits being different.
*
* Return: Always 0 (Success)
*/
#include <stdio.h>

int main(void)
{
int d1, d2, d3;

for (d1 = 0; d1 < 8; d1++)
{
for (d2 = d1 + 1; d2 < 9; d2++)
{
for (d3 = d2 + 1; d3 < 10; d3++)
{
putchar(d1 + 0);
putchar(d2 + 0);
putchar(d3 + 0);

if (d1 != 7 || d2 != 8 || d3 != 9)
{
putchar(44);
putchar(32);
}
}
}
}

putchar(10);

return (0);
}
