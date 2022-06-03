#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * description - function that prints if n is
 * positive, negative or zero
 * Return: it outputs 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
return (0);
}
