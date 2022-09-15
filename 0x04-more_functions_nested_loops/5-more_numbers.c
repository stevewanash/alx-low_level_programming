# include <stdio.h>                                                                                                         
# include "main.h"

/**                                                                                                                         
 * more_numbers - prints numbers 0-14                                                                                                                                                                                                  
 * 10 times
 *
 * Return: none                                                                                                        
 */                                                                                                                         
                                                                                                                            
void more_numbers(void)                                                                                                         
{       
	int c;
	int d;
	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 15; d++)
		{
		    if (d > 9)
		    {
		        _putchar((d/10)+ '0');
		    }
		    _putchar((d%10)+ '0');
		}
		_putchar('\n');
	}                                                                                                         
} 
