# include <stdio.h>
# include "main.h"
                                                                                                                            
/**                                                                                                                         
 * main - prints "_putchar"                                                                                          
 * no parameters                                                                                                         
 *                                                                                  
 *                                                                                                                          
 * Return: zero always
 * 
 * 
 */                                                                                                                         
                                                                                                                            
int main()
{
	char r[] = "_putchar";
	int m;
	for (m = 0; m < 8; m++)
	{
		_putchar(r[m]);
	}
	_putchar('\n');
	return (0);
}
