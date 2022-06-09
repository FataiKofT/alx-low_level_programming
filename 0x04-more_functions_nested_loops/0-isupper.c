#include "main.h"

/**
 * _isupper - a function to check for uppercase
 * @c: parameter
 * Return: return either 1 or 0
 */

int _isupper(int c)
{

if ((c <= 'a') &&(c >= 'z'))
return (0);
else
return (1);
}
