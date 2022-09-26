#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: The buffer to be printed into
 * @b: The character to be printed
 * @n: The number of bytes in the buffer to be filled
 *
 * Return: the buffer printed into
 */
char *_memset(char *s, char b, unsigned int n)
{

	int c = 0;

	while (c < n)
	{

		s[c] = b;

		c++;

	}

	return (s);

}
