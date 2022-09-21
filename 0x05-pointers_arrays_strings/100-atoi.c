#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: is the string to be converted
 *
 * Return: value of integer
 */
 
int _atoi(char *s)
{
	int sign = 1, number = 0, index = 0, n = 0;
	while (!(s[n] >= '0' && s[n] <= '9'))
	{
		n++;
	}
	if(s[n - 1] == '-')
	{
		sign = -1;
		index = 1;
	}
	while(s[n] != '\0')
	{
		if(s[n] >= '0' && s[n] <= '9')
		{
			number = number*10 + s[n] - '0';
		} 
		else 
		{
			break;
		}
		n++;
	}
		
	number = number * sign;
	return (number);
}
