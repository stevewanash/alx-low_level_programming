#include <stdio.h>                                                                                                          
                                                                                                                          
/**                                                                                                                       
 * cap_string - converts string to uppercase                                                                              
 * @a: string to be converted to uppercase                                                                                
 *                                                                                                                        
 * Return: converted string                                                                                               
 */                                                                                                                       
char *cap_string(char *a)                                                                                                 
{                                                                                                                         
     	int c = 0;                                                                                                        
        while (a[c] != '\0')                                                                                              
        {                                                                                                                 
               	if (a[c] >= 9 && a[c] <= 47 || a[c] >= 58 && a[c] <= 64 || a[c] >= 123 && a[c] <= 125)                    
                {                                                                                                         
                      	if (a[c + 1] >= 97 && a[c + 1] <= 122)                                                            
                        {                                                                                                 
                              	a[c + 1] = 65 + (a[c + 1] % 97);                                                          
                                c++;                                                                                      
                                continue;                                                                                 
                        }                                                                                                 
                        c++;                                                                                              
                        continue;                                                                                         
                }                                                                                                         
                c++;                                                                                                      
        }                                                                                                                 
        return (a);                                                                                                       
}
