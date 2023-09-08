#include <stdio.h>
/**
*main - executes the code
*Return: 0 (For Success)
*/
int main(void)
{
/*declare variables for the hexadecimal numbers*/
int num = 0;
/*declare variables for the hexadecimal letters*/
char alpha = 'a';
/*give the conditions for output of hexa numbers*/
while (num <= 9)
{
/*print output value*/
putchar(48 + num);
/*increment value by 1*/
num++;
}
/*give condition for output of hexa letters*/
while (alpha <= 'f')
{
/*print output value*/
putchar(alpha);
/*increment by 1*/
alpha++;
}
/*print a newline*/
putchar('\n');
return (0);
}
