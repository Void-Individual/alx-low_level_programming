#include "main.h"
/**
 *print_numbers - a function that prints the numbers,
 *from 0 to 9, followed by a new line.
 *Return: no return value
 */
void print_numbers(void)
{
int x = '0';
while (x <= '9')
{
_putchar(x);
x++;
}
_putchar('\n');
}
