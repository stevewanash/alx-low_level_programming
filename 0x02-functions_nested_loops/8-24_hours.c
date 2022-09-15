# include <stdio.h>

/**
 * jack_bauer - prints all minutes in a day
 * 
 * no parameters
 *
 *
 * 
 */

void jack_bauer(void)
{
	int i;
	int j;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
