#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 *@c: variable of the function
 *Return: 1 if c is uppercase, 0 if it isn't
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
