#include <stdio.h>


/**
 * _strlen_recursion - calculates length of string
 * @s: The string to calculate length
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));

}
