#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * description - omit e and q from alphabet
 * Return: 0
 */

int main(void)
{

int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
}
else
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
