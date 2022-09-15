# include <stdio.h>                                                                                                         
# include <stdlib.h>

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
        printf("%d", abs(b));
	return (abs(b));
}
