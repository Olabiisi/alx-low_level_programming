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
int i, j, k;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + 0);
putchar(j + 0);
putchar(k + 0);

if (i != 7 || j != 8 || k != 9)
{
putchar(,);
putchar( );
}
}
}
}

putchar(n);

return (0);
}
