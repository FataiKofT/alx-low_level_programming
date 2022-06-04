#include <stdio.h>

/**
 * main - entry point
 * description - C program
 * Return: 0
 */

int main(void)
{

int a;
int b;
int c = 1;

while (a <= 9)
{
while (b <= 9)
{
if (a < b)
{
if (c == 0)
{
putchar(',');
putchar(32);
}
c = 0;
putchar ((a) + '0');
putchar ((b) + '0');
}
b++;
}
a++;
b++
}
putchar(10);
return (0);
}
