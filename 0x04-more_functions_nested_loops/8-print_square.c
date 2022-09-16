# include <stdio.h>                                                                                                         
# include "main.h"

/**                                                                                                                         
 * print_square - prints square using "#"                                                                                                                                                                                             
 *
 * @size: size of square "#" should print
 *
 * Return: none                                                                                                        
 */                                                                                                                         
                                                                                                                            
void print_square(int size)                                                                                                         
{       
	int c;
	int d;
	if (size <= 0)
		_putchar('\n');
	for (c = 1; c <= size; c++)
	{
		for (d = 1; d <= size; d++)
			_putchar('#');
		_putchar('\n');
	}
}
