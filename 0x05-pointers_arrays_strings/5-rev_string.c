#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 *
 * @s: string to be printed
 *
 * No return
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	char d[500];
	char e[500];
	while (s[c] != '\0')
	{
		d[c] = s[c];
		e[c] = s[c];
		c++;
	}
	
	c -= 1;
	
	while (c >= 0)                                                                                              
	{
		if (c == b)
			while (s[a] != '\0')
			{
				d[a] = e[a];
				a++;
	        	}
		s[c] = d[b];
		c--;
		b++;

	}

}
