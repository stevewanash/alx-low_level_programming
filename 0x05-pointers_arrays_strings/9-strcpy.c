#include <stdio.h>

/**
 * *_strcpy - copies content from one pointer to
 * another
 *
 * @dest: buffer to
 * @src: buffer copying from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int b = 0;

	int c = 0;

	while (src[b] != '\0')
	
		b++;

	while (c <= b)
	{

		dest[c] = src[c];

		c++;

	}

	return (dest);

}
