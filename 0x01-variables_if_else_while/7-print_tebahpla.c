#include <stdio.h>
/**
*main - initiates code
*Return: 0 (Success)
*/
int main(void)
{
/*set variable for z to cover range z - a*/
char alpha = 'z';
/*set a conditionto compare its values*/
while (alpha >= 'a')
{
/*print the output character*/
putchar(alpha);
/*decrease value by 1*/
alpha--;
}
/*print a newline*/
putchar('\n');
return (0);
}
