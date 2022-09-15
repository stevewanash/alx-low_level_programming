#include <stdio.h>

/**                                                                                                                         
 * print_to_98 - print natural numbers from n upto 98                                                                                 
 * @n: starting point
 *
 * Return: no return value                                                                                                        
 */                                                                                                                         
void print_to_98(int n)                                                                                                      
{                                                                                                                           
	int j = n;
	while (j != 98)
	{
		printf("%d, ", j);
		if (j > 98)
		{
			j--;
			continue;
		}
		j++;
	}
	printf("98\n");
}
