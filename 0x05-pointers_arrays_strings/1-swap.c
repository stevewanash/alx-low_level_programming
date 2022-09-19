#include <stdio.h>

/**
 * swap_int - updates value pointed to to 98
 *
 * @a: is the integer being pointed to
 * @b: is the integer with which the value
 * will be swapped
 * No return
 */

void swap_int(int *a, int *b)
{

	int c;

	c = *a;

	*a = *b;

	*b = c;

}
