#include <stdio.h>

/**
 * main - entry point
 * description - using putchar to print all single
 *digit number of base 10
 * Return: 0
 */

int main(void)
{

int n;

for (n = 0; n < 10; n++)
{
putchar((n) + '0');
}
putchar('\n');
return (0);
}
