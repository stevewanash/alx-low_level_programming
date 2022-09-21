#include <stdio.h>

/**
 * leet - converts specific letters to numbers
 * @a: string to be converted
 *
 * Return: converted string
 */
char *leet(char *a)
{
	int c = 0;
	while (a[c] != '\0')
	{
		if (a[c] == 65 || a[c] == 97)
		{
			a[c] = 52;
			c++;
			continue;
		}
		else if (a[c] == 69 || a[c] == 101)
		{
			a[c] = 51;
			c++;
			continue;
		}
		else if (a[c] == 79 || a[c] == 111)
		{
			a[c] = 48;
			c++;
			continue;
		}
		else if (a[c] == 84 || a[c] == 116)
		{
			a[c] = 55;
			c++;
			continue;
		}
		else if (a[c] == 76 || a[c] == 108)
		{
			a[c] = 49;
			c++;
			continue;
		}
		else
			c++;
	}
	return (a);
}
