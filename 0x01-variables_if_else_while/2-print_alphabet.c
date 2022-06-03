#include <string.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * description - C program that prints a to z
 * Return: it returns 0
*/

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
