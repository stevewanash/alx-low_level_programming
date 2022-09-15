# include <stdio.h>                                                                                                         
# include "main.h"

/**                                                                                                                         
 * print_numbers - prints numbers 0-9                                                                                                                                                                                                 
 * 
 *
 * Return: none                                                                                                        
 */                                                                                                                         
                                                                                                                            
void print_numbers(void)                                                                                                         
{       
	int c;
	for (c = 0; c < 10; c++)
		_putchar(c + '0');
	_putchar('\n');                                                                                                         
}
