/**
* main - Entry point of the program
*
* Description: This program prints all single-digit numbers
* separated by a comma and a space, followed by a newline.
*
* Return: Always 0 (Success)
*/
#include <stdio.h>

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + 48);
if (i != 9)
{
putchar(44);
putchar(32);
}
}

putchar(10);

return (0);
}
