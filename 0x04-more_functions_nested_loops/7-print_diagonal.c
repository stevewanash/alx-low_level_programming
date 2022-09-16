# include <stdio.h>                                                                                                         
# include "main.h"

/**
 * print_diagonal - prints diagonal using "_"
 * @n: size of square "#" should print
 *
 * Return: none
 */
void print_diagonal(int n)
{                                                                                                                           
        int c;
        int d;
	if (n <= 0)
		_putchar('\n');
        for (c = 1; c <= n; c++)
        {
                _putchar('\\');
                _putchar('\n');
                for (d = 0; (d < c && c < n) ; d++)
                        _putchar(' ');
        }
}
