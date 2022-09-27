#include <stdio.h>

/**
 * *_strchr - checks for a character in a string
 * @s: The string where the character is checked
 * @c: The character to be checked
 *
 * Return: On success, pointer to character in
 * string
 * 0 if character not found
 *
 */
char *_strchr(char *s, char c)
{

	int a = 0;

	while (s[a] != c && s[a] != '\0')
		a++;

	return (s + a);

}
