#include "main.h"
/**
*print_alphabet - print the alphabet in lowercase, with a newline
*Return will be empty, since we begin with void
*/
void print_alphabet(void)
{
/*set starting variable a */
char alpha = 'a';
/*set control range*/
while (alpha <= 'z')
{
/*print the letter*/
_putchar(alpha);
/*increment the value by 1*/
alpha++;
}
/*print the newline seprately*/
_putchar('\n');
/*there will be no return value, since we are using void*/
}
