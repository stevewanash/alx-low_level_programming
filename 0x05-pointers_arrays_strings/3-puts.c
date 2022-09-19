#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: string to be printed
 *
 * No return
 */

void _puts(char *str);
{

	int a = 0;

	while (str[a] != '\0')
	{

		putchar(str[a]);

		a++;

	}

	putchar('\n');

}
