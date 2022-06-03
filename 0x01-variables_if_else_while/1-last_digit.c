#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * description - function that prints if last digit
 * of n is greater than 5,is 0 or less than 6 and not 0
 * Return: it outputs one option
*/

int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0);
}
