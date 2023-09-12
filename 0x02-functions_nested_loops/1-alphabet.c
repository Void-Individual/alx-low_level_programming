#include "main.h"
/**
*main - print the alphabet in lowercase, with a newline
*Return: 0 (Success)
*/
int main(void)
{
/*set starting variable a */
char alpha = 'a';
/*set control range*/
while (alpha <= 'z')
{
/*print the letter*/
putchar(alpha);
/*increment the value by 1*/
alpha++;
}
/*print the newline seprately*/
putchar('\n');
return (0);
}
