#include <stdio.h>
/**
*main - a program to print all possible combo of single digit numbers
*Return: 0 (success)
*/
int main(void)
{
/*set variable for the value*/
int num = 0;
/*set the conditions*/
while (num <= 9)
{
/*print output*/
putchar(num + '0');
if (num != 9)
{
/*print comma*/
putchar(',');
/*print space*/
putchar(' ');
}
/*add increment*/
num++;
}
putchar('\n');
return (0);
}
