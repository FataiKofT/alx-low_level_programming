#include <stdio.h>

/**
 * main - entry point
 * description - the use of while loop in C program
 * Return: 0
 */

int main(void)
{

int a = '0';
while (a <= '9')
{
putchar(a);
if (a != '9')
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
