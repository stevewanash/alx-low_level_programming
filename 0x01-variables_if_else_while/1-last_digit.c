#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - shows if the last digit
 * of a random number is >0, =0,
 * or is >0 and <=5
 * no parameters
 *
 *Return: 0 denotes the end of the function
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n[-1] > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n[-1]);
	else if (n[-1] == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n[-1]);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n[-1]);
	}
	return (0);
}
