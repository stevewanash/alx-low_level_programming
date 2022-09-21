#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string being compared to s2
 * @s2: reference string
 *
 * Return: > 0 if s1 is greater than s2
 * 0 if both are equal
 * < 0 if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{

	int c = 0, sign = 1;

	while (s2[c] != '\0' && s1[c] != '\0')
	{
		if (s1[c] == s2[c])
		{

			c++;

			continue;

		}
		else if (s1[c] > s2[c])
			return (s1[c] - s2[c]);

		else
		{

			sign = -1;

			return (sign * (s2[c] - s1[c]));

		}
	}
}
