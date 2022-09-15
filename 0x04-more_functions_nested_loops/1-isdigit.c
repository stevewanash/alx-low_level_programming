# include <stdio.h>                                                                                                         
                                                                                                                            
                                                                                                                            
/**                                                                                                                         
 * _isdigit - checks for digit                                                                                        
 * characters                                                                                                               
 * @c: is the input to be checked for case                                                                                  
 *                                                                                                                          
 *Return: 1 if input is a digit                                                                                          
 * 0 otherwise                                                                                                              
 */                                                                                                                         
                                                                                                                            
int _isdigit(int c)                                                                                                         
{                                                                                                                           
        if(c >= 48 && c <= 57)                                                                                             
                return (1);                                                                                                 
        return (0);                                                                                                         
}
