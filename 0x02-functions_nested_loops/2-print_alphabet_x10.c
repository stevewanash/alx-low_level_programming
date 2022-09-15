# include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 * in lower case 10 times
 * no arguments
 *
 */

void print_alphabet_x10(void)
{
	
	char alphabet;
	
	int i;
	
	for(i = 0; i < 10; i++)
	{
		
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			
			putchar(alphabet);
			
		}
		
		putchar('\n');
		
	}
	
}
