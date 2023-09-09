#include <stdio.h>
/**
*main - program to run combo of 2 digits
*Return: 0 (rule for success)
*/
int main(void)
{
/*set variable for the first and second digits*/
int ten = 0;
int unit;
/*set condition for ten is less than 9*/
while (ten < 9)
{
/*to ensure that unit will never be equal to ten*/
for (unit = ten + 1; unit <= 9; unit++)
{
if (ten != unit)
{
/*print the ten*/
putchar(ten + 48);
/*print the unit*/
putchar(unit + 48);
/*set condition to print period until the last combo*/
if (ten != 8 && unit != 9)
{
putchar(',');
putchar(' ');
}
}
}
/*when unit has completed current cycle increment ten*/
ten++;
}
return (0);
}
