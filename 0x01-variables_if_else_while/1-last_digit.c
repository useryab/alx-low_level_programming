#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * return:0
*/
int main(void)
{
int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
/* % i.e modulus divides n by 10 and stores the value of the
remainder in l(5)*/	 
if (l > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, l);
if (l == 5)
printf("Last digit of %d is %d and is 0\n", n, l);
if (l < 6 && l != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
return (0);
}
