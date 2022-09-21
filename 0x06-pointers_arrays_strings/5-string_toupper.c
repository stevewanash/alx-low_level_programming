#include <stdio.h>

/**
 * string_toupper - converts string to uppercase
 * @a: string to be converted to uppercase
 *
 * Return: converted string
 */
char *string_toupper(char *a)
{

	int c = 0;

	while (a[c] != '\0')
	{

		if (a[c] >= 97 && a[c] <= 122)
		{

			a[c] = 65 + (a[c] % 97);

			c++;

			continue;

		}

		c++;

	}

	return (a);

}
