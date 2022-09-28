#include <stdio.h>

/**
 * _strspn - checks for a character in a string
 * @s: The string where the characters are checked
 * @accept: The characters to be checked
 *
 * Return: Number of bytes with said characters
 */
unsigned int _strspn(char *s, char *accept)
{

	int a;

	int b = 0;

	int c = 0;

	while (accept[b] != '\0')
	{

		a = 0;

		while (s[a] != '\n' && s[a] != ' ' && s[a] != '\0')
		{

			if (s[a] == accept[b])

				c++;
			a++;

		}

		b++;

	}

	return (c);

}
