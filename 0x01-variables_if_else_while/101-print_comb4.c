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
int c;
int d = 1;

while (a <= 9)
{
while (b <= 9)
{
while (c <= 9)
{
if (a < b && b < c)
{
if (d == 0)
{
putchar(',');
putchar(32);
}
c = 0;
putchar((a) + '0');
putchar((b) + '0');
putchar((c) +'0');
}
++c;
}
++b;
c = 0;
}
++a;
b = 0;
}
putchar(10);
return (0);
}
