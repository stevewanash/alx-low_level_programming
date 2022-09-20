#include <stdio.h>

/**
 * puts2 - prints every second character of a string
 *
 * @str: string to be printed
 *
 * No return
 */

void puts2(char *str)
{

	int a = 0;

	while (str[a] != '\0')
	{

		if (a % 2 == 0)

			putchar(str[a]);

		a++;

	}

	putchar('\n');

}
