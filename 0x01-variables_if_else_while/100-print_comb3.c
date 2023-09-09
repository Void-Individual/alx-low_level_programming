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
/*to ensure that unit will never be equal to ten*/
unit = ten + 1;
/*set condition for ten is less than 9*/
while (ten < '9')
{
/*set condition for unit isn't more than 9*/
if (unit <= '9')
{
/*to ensure there be no coincidental repetition*/
if (ten != unit)
{
/*print the ten*/
putchar(ten);
/*print the unit*/
putchar(unit);
/*set condition to print period until the last combo*/
if (ten != 8 && unit != 9)
{
putchar(',');
putchar(' ');
/*continue to increment until limit is reached*/
unit++;
}
}
}
/*when unit has completed current cycle increment ten*/
ten++;
}
return (0);
}
