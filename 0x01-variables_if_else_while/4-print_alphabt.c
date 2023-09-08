#include <stdio.h>
/**
*main - begins the program
*
*Return: 0
*/
int main(void)
{
/*declare variable a to initialize the range a - z*/
char alpha = 'a';
/*check the last variable, if it is less*/
while (alpha <= 'z')
{
/*insert the exceptions to the rule*/
if (alpha != 'e' && alpha != 'q')
/*print the value of the alpha*/
putchar (alpha);
/*increment alpha*/
alpha++;
}
/*print a newline*/
putchar ('\n');
return (0);
}
