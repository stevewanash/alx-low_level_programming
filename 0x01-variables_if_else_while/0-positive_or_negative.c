#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - shows whether number is
 * postive, negative, or a zero
 * no parameters
 *
 *Return: 0 denotes the end of the function
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
