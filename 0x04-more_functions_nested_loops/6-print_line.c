# include <stdio.h>                                                                                                         
# include "main.h"

/**                                                                                                                         
 * print_line - prints line using "_"                                                                                                                                                                                             
 *
 * @n: number of times "_" should print
 *
 * Return: none                                                                                                        
 */                                                                                                                         
                                                                                                                            
void print_line(int n)                                                                                                         
{       
	int c;
	for (c = 1; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
