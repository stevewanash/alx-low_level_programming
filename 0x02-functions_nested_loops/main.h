#include <stdio.h>

/**
 * put_char - prints the function _putchar
 * no arguments
 *
 * Return: 0 always
 */
int put_char(void)
{
	int n;
	char result[] = "_putchar";
	for (n = 0; n < 8; n++)
	{
		putchar(result[n]);
	}
	putchar('\n');
	return (0);
}

/**
 * print_alphabet - prints the alphabet
 * in lower case
 * no arguments
 *
 */
void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
