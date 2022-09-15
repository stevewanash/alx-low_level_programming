# include <stdio.h>
# include "main.h"
                                                                                                                            
/**                                                                                                                         
 * print_sign - checks for sign of                                                                                          
 * characters                                                                                                               
 * @n: is the input to be checked for sign                                                                                 
 *                                                                                                                          
 *Return: 1 if input is an positive                                                                                          
 * 0 if input is zero
 * -1 otherwise
 */                                                                                                                         
                                                                                                                            
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return(0);
		_putchar('0');
	}
	return (-1);
	_putchar('-');
}
