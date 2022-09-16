# include <stdio.h>                                                                                                         
                                                                                                                            
/**                                                                                                                         
 * times_table - mutliplication table                                                                                       
 *                                                                                                                          
 * no parameters                                                                                                            
 *                                                                                                                          
 *                                                                                                                          
 *                                                                                                                          
 */                                                                                                                         
void print_times_table(int n)                                                                                                      
{                                                                                                                           
        int i;                                                                                                              
        int j;                                                                                                              
        for (i = 0; i < n; i++)                                                                                            
        {

                for (j = 0; j < n; j++)                                                                                    
                {                                                                                                           
                        if (j == 9)                                                                                         
                        {
				if (n > 15 || n < 0)
					printf("\n");
					break;
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
