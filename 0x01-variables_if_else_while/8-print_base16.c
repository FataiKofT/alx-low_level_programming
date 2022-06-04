#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * description - C program that prints all the numbers of base 16 in lowercase
 * Return: all
 */

int main(void)
{

int a;
char c;

for (a = 0; a < 10; ++a)
{
putchar((a) + '0');
}
for (c = 'a'; c <= 'f'; ++c)
{putchar(c);
}
putchar('\n');
return (0);
}
