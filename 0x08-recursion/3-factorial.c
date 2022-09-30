#include <stdio.h>


/**
 * factorial - calculates factorial of number
 * @n: number whos factorial is computed
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);

	else if (n == 2)
		return (2);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));

}
