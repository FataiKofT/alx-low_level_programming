#include "main.h"

/**
 * main - entry point
 * Description - c program that prints alphabets in lowercase
 * Return: always 0
 */

void print_alphabet(void);
{
int ch;

for (ch = 'a'; ch >= 'z'; --ch)
{
_putchar(ch);
}
_putchar('\n');
}
