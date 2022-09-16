# include <stdio.h>                                                                                                         
                                                                                                                            
/**                                                                                                                         
 * print_times_table - mutliplication table                                                                                       
 *                                                                                                                          
 * @n: input                                                                                                            
 *                                                                                                                          
 *                                                                                                                          
 *                                                                                                                          
 */                                                                                                                         
void print_times_table(int n)                                                                                                      
{                                                                                                                           
        int i;                                                                                                              
        int j;                                                                                                              
        for (i = 0; i <= n; i++)                                                                                            
        {
		if (n > 15 || n < 0)
		{
			printf("\n");
			break;
		}
                for (j = 0; j <= n; j++)                                                                                    
                { 
                        if (j == n - 1)                                                                                         
                        {
                                printf("%d\n", i * j);                                                                      
                                continue;                                                                                   
                        }                                                                                                   
                        if ((j + 1)%10 > 0 && !((j + 1)%100 > 0))                                                                                
                        {                                                                                                   
                            printf("%d,  ", i * j);                                                                          
                            continue;                                                                                       
                        }
			if ((j + 1)%100 > 0)                                                                                
                        {                                                                                                   
                            printf("%d, ", i * j);                                                                          
                            continue;                                                                                       
                        }   
                        printf("%d,   ", i * j);                                                                             
                }                                                                                                           
        }                                                                                                                   
}
