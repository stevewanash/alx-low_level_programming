#include <stdio.h>

/**
 * print_number - prints integers
 * @value: integer to be printed
 *
 * no return
 */
void print_number(int n)
{

	if(value != 0)
	{

		print_number(n/10);

		putchar((n%10) + '0');

	}
}
