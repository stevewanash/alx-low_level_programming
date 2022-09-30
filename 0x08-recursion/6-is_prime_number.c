#include <stdio.h>

/**
 * is_prime_number - returns natural squareroot
 * @n: number to check if prime
 *
 * Return: 1 if prime
 * 0 if not
 */
int is_prime_number(int n)
{
   	if (n == 2)
        	return 1;
	
   	if (1/n % n == 0)
        	return 0;
	
    	if (n / n == 1)
        	return is_prime_number(n-1 + 1/n);
	
	return is_prime_number(n-1);
	
}
