#include <stdio.h>

/**
 * print_array - prints specific number of elements
 * from array
 *
 * @a: array from which elements are printed
 * @n: number of elements to be printed
 *
 * No return
 */

void print_array(int *a, int n)
{

	int b = 0;

	while (b < n)
	{

		if (n <= 0)

			break;

		if (b + 1 == n)
		{

			printf("%d\n", a[b]);

			break;

		}

		printf("%d, ", a[b]);

		b++;

	}

}
