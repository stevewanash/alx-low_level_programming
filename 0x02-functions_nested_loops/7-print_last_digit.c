# include <stdio.h>                                                                                                         
# include <stdlib.h>
# include "main.h"

/**                                                                                                                         
 * print_last_digit - prints last digit of
 * given number                                                                                                                          
 * @a: the number being checked                                                                                                           
 *                                                                                                                          
 * Return: absolute value of the                                                                                                                      
 * last digit                                                                                                                        
 */ 
int print_last_digit(int a)                                          
{                 
	int b = a % 10;
        _putchar(b + '0');
	return (abs(b));
}
