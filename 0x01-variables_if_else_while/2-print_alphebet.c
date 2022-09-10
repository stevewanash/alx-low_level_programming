#include <stdio.h>
/* more headers goes there */

/**
 * main - prints out all the alphabet
 * letters in small case
 * no parameters
 *
 *Return: 0 denotes the end of the function
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	
	putchar(\n);
	return (0);
}
