#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * Description - function to print _putchar
 * Return: return 0 (success)
 */

int main(void)
{
char string[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
_putchar(string[i]);
}
_putchar("\n");
return (0);
}
