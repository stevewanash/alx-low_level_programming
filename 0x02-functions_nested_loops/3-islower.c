# include <stdio.h>                                                                                                         
# include <ctype.h>                                                                                                         
                                                                                                                            
/**                                                                                                                         
 * _islower - checks for lowercase                                                                                
 * characters                                                                                                               
 * @c: is the input to be checked for case                                                                                  
 *                                                                                                                          
 *Return: 1 if input is lowercase                                                                                           
 * 0 otherwise                                                                                                              
 */                                                                                                                         
                                                                                                                            
int _islower(int c)                                                                                                         
{                                                                                                                           
        return (islower(c + '0'));                                                                                                
}
