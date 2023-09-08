#include <stdio.h>
/**
*main - executes the program
*
*Return: 0
*/
int main(void)
{
/*declare variable a to initialize the range a - z*/
char alpha = 'a';
/*declare variable A to initialize the range A - Z*/
char ALPHA = 'A';
/*check the last variable, if the value is less, print*/
while (alpha <= 'z')
{
/*print the value of the variable*/
putchar (alpha);
/*increment the value by 1*/
alpha++;
}
/*check the last variable, and print the capitals*/
while (ALPHA <= 'Z')
{
/*print the value of the variable*/
putchar (ALPHA);
/*increment the variable*/
ALPHA++;
}
/*include a newline*/
putchar ('\n');
return (0);
}
