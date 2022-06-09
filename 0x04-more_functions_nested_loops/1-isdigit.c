#include "main.h"

/**
 * isdigit -
 * description -  a function to check if a character is a digit
 * @c: parameter
 * Return: either 0 or 1
 */

int _isdigit(int c)
{
if ((c == 0) || (c <= 9))
return (1);
else
return (0);
}
