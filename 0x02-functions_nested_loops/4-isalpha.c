# include <stdio.h>                                                                                                                                                                                                                  
                                                                                                                            
/**                                                                                                                         
 * _isalpha - checks for alphabet                                                                                          
 * characters                                                                                                               
 * @c: is the input to be checked for case                                                                                  
 *                                                                                                                          
 *Return: 1 if input is an alphabet                                                                                          
 * 0 otherwise                                                                                                              
 */                                                                                                                         
                                                                                                                            
int _isalpha(int c)
{
	if((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
