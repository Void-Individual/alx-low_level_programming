File Edit Options Buffers Tools C Help
#include <stdio.h>
/**
*main - executes the program
*Return: 0 (Success)
*/
int main(void)
{
/*declare a variable to contain tha range 0 - 9*/
int num = 0;
/*compare with the last variable*/
while (num <= '9')
{
/*print output*/
putchar(num);
/*increment by 1*/
num++;
}
/*set a condition for when the final value is reached*/
if (num == '9')
/*print a newline*/
putchar('\n');
return (0);
}
