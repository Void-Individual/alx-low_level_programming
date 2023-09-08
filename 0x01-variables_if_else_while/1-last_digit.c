#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - initializes the program
*
*Return: 0 (This programs success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int l;
l = n % 10;
/**
*This process divides the random value of n by 10
*
*and leaves the last digit as the remainder
*/
if (l > 5)
{printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l == 0)
{printf("Last digit of %d is %d and is 0\n", n, l);
}
else if (l < 6 && l != 0)
/*This rule means l is less than 6 but not equal to 0*/
{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}

return (0);
}
