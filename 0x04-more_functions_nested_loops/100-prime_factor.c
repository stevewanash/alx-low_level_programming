#include <stdio.h>


/**
 * prime - determines if a number is a prime
 * number
 * @n: the number to be tested
 *
 * Return: 1 if prime
 * 0 if not prime
 */
int prime(int n)
{
	int i;
	for(i = 2; i <= n/2; i++)
	{
		if (!((n % i) == 0))
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * main - prints largest prime factor of a number
 *
 * Return: 0 always
 */
int main(void)
{
	long long int i = 612852475143;
	long long int j = 2;
	int res;
	while (j <= i/2)
	{
		res = prime(j);
		if (res == 0)
		{
			j++;
			continue;
		}
		if (i % j == 0)
		{
			i = i / j;
		}
		else
			j++;
	}
	if (j >= i/2)
	    printf("%lld", i);
	else if (j < (i / j))
		printf("%lld", i / j);
	else
		printf("%lld", j);
	return (0);
}
