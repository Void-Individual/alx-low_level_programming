#include "main.h"
/**
*print_alphabet_x10- print the alphabet in lowercase
*and a new line x10 times
*Return: empty, since we're working with a void program
*/
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
