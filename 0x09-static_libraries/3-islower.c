#include "main.h"
/**
*_islower - a function that writes lowercase characters
*
*@c: is the variable for the sample text
*
*Return: 0 if false, 1 if true
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
