#include <stdio.h>

/**
 * _strlen - gives length of string
 *
 * @s: string whose length is calculated
 *
 * Return: 0 always
 */

int _strlen(char *s)
{

	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);

}
