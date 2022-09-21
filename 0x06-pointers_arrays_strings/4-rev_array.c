#include <stdio.h>

/**
 * reverse_array - reverses string
 * @a: string to be inverted
 * @n: number of elements to be inverted
 *
 * No return
 */
void reverse_array(int *a, int n)
{

	int b = 0, c = 0, d = 0, e[100];

	while ((a[c] != '\0' || a[c] == 0) && c != n)
	{

		e[c] = a[c];

		c++;

	}

	d = c;

	while (b < c)
	{

		a[b] = e[d - 1];

		b++;

		d--;

	}
}
