# include <stdio.h>                                                                                                         
                                                                                                                            
/**                                                                                                                         
 * times_table - mutliplication table                                                                                       
 *                                                                                                                          
 * no parameters                                                                                                            
 *                                                                                                                          
 *                                                                                                                          
 *                                                                                                                          
 */ 
void times_table(void)                                          
{                                                              
        int i;                                                  
        int j;                                                  
        for (i = 0; i < 10; i++)                                
        {                                                        
                for (j = 0; j < 10; j++)                         
                {                                            
                        if (j == 9)                                 
                        {                                          
                                printf("%d\n", i * j);              
                                continue;                         
                        }           
                        if (i * (j + 1) > 9)
                        {
                            printf("%d, ", i * j);
                            continue;
                        }
                        printf("%d,  ", i * j);                  
                }                                                   
        }                                                       
}
