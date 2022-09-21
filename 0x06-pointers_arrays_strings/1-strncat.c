#include <stdio.h>

/**
 * *_strncat - appends src to dest
 * for a max of n characters from src
 * @dest: buffer to append to
 * @src: buffer copying from
 * @n: number of bytes to take from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int a = 0, b = 0, c = 0;

	while (src[b] != '\0' && b != n)
		b++;

	while (dest[a] != '\0')
		a++;

	while (c < b)
	{

		dest[a] = src[c];

		c++;

		a++;

	}

	return (dest);

}
