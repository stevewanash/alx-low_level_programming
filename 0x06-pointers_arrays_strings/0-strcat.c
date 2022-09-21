#include <stdio.h>

/**
 * *_strcat - writes the character c to stdout
 * @dest: buffer to append to
 * @src: buffer copying from
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{

	int a = 0, b = 0, c = 0;

	while (src[b] != '\0')
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
