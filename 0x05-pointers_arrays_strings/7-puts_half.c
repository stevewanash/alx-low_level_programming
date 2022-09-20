#include <stdio.h>

/**
 * puts_half - prints half the string
 *
 * @str: string to be printed
 *
 * No return
 */

void puts_half(char *str)
{

	int a = 0;

	int b = 0;

	while (str[a] != '\0')

		a++;

	a -= 1;

	b = (a / 2) + 1;

	while (b > a / 2 && b <= a)
	{

		putchar(str[b]);

		b++;

	}

	putchar('\n');

}
