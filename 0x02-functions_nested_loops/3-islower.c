# include <stdio.h>                                                                                                                                                                                                                  
                                                                                                                            
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
	if(c >= 97 && c <= 122)
		return (1);
	return (0);
}
