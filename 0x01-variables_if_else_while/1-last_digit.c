#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Description: This program generates a random number and
*              prints its last digit.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastdigit = n % 10;

printf("Last digit of %d is %d ", n, lastdigit);

if (lastdigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastdigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}

return (0);
}
