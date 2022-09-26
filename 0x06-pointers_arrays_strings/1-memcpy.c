#include <stdio.h>

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: The buffer to be printed into
 * @src: The characters to be printed
 * @n: The number of bytes in the buffer to be filled
 *
 * Return: the buffer printed into
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int a = 0, b = 0, c = 0;

	while (src[b] != '\0' && b != n)
		b++;

	while (c < b && c < n)
	{

		dest[a] = src[c];

		c++;

		a++;

	}

	return (dest);

}
