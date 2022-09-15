#include <stdio.h>

/**                                                                                                                         
 * print_to_98 - print natural numbers from n upto 98                                                                                 
 * @n: starting point
 *
 * Return: no return value                                                                                                        
 */                                                                                                                         
void print_to_98(int n)                                                                                                      
{                                                                                                                           
	int j;
	for (j = n; j < 99; j++)
	{
		if (j == 98)
			printf("%d\n", j);
		printf("%d ", j);
	}
}
