#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle using "#"
 * @size: size of the triangle
 * denotes length of both size and base
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int l;
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (l = 1; l <= i; l++)
			_putchar('#');
	}
	_putchar('\n');
}
