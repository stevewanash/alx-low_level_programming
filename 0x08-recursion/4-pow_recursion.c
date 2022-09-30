#include <stdio.h>

/**
 * _pow_recursion - raises number to certain power
 * @x: base number
 * @y: power
 *
 * Return: number raised to power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else if (y < 0)
		return (-1);

	else
		return (x * _pow_recursion(x, y - 1));

}
