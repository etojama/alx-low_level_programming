#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
* * main - determines if a random number
* * generated is positive or negative
*
* Return: returns 0 at the end
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
