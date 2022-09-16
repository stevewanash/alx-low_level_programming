# include <stdio.h>                                                                                                         
# include "main.h"                                                                                                          
                                                                                                                            
/**                                                                                                                         
 * print_diagonal - prints square using "#"                                                                                 
                                                                                                                            
 *                                                                                                                          
 * @n: size of square "#" should print                                                                                      
 *                                                                                                                          
 * Return: none                                                                                                             
 */                                                                                                                         
                                                                                                                            
void print_diagonal(int n)                                                                                                  
                                                                                                                            
{                                                                                                                           
        int c;                                                                                                              
        int d;                                                                                                              
        for (c = 1; c <= n; c++)                                                                                            
        {                                                                                                                   
                _putchar('\\');                                                                                             
                _putchar('\n');                                                                                             
                for (d = 0; (d < c && c < n) ; d++)                                                                                     
                        _putchar(' ');                                                                                      
        }                                                                                                                   
}
