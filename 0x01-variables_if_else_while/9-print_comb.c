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
	int j;
	for (c = 0; c < 10; c++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(c + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
