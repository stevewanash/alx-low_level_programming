#include <stdio.h>
#include "main.h"

/**
 * print_number - prints numbers
 * @n: number to be printed
 *
 * Return: none
 */

void print_number(int n)
{      
	int r;
	if (n < 0)
	{
        	putchar('-');
        	n = -n;
    	}
		
	else if (n > 9999)
	{
		_putchar((n/10000)+ '0');
		r = n%10000;
		_putchar((r/1000)+ '0');
		r = r%1000;
		_putchar((r/100)+ '0');
		r = r%100;
		_putchar((r/10)+ '0');
	}
	else if (n > 999)   
	{
		_putchar((n/1000)+ '0');
		r = n%1000;
		_putchar((r/100)+ '0');
		r = r%100;
		_putchar((r/10)+ '0');
	}
	else if (n > 99)     
	{
		_putchar((n/100)+ '0');
		r = n%100;
		_putchar((r/10)+ '0');
	}
	else if (n > 9)                                                                                           
		_putchar((n/10)+ '0'); 
	
	_putchar((n%10)+ '0'); 
	
}
