#include <stdio.h>

/**
 * *_strncpy - copies contents of one array
 * to another, and the rest of the array turned
 * into \0
 * @dest: buffer to copy to
 * @src: buffer copying from
 * @n: number of elements to be copied from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int b = 0, c = 0;

	while (src[b] != '\0' && b != n)
		b++;

	while (c < b)
	{

		dest[c] = src[c];

		c++;

		if (src[c] == '\0')
		{

			while (dest[c] != '\0')
			{

				dest[c] = '\0';

				c++;

			}
		}
	}

	return (dest);

}
