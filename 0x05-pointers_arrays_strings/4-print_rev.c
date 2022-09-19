#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed
 *
 * No return
 */

void print_rev(char *s)
{

	int a = 0;

	while (s[a] != '\0')

		a++;

	a -= 1;

	while (a >= 0)
	{

		putchar(s[a]);

		a--;

	}

	putchar('\n');

}
