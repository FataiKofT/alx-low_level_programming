#include <string.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * description - C program that prints alphaBET
 * Return: it returns 0
*/

int main(void)
{
int ch, CH;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
