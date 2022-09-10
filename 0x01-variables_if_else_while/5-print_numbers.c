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
	int c;
	for (c = 1; c < 10; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
