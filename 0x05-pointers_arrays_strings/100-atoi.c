#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: is the string to be converted
 *
 * Return: value of integer
 */
 
int _atoi(char *s)
{
	signed int sign = 1, number = 0, n = 0;
	while (!(s[n] >= '0' && s[n] <= '9') && s[n] != '\0')
	{
		n++;
	}

	if(s[n - 1] == '-')
	{
		sign = -1;
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
	
    	if (sign * number > 2147483647)
	{
	    
		return ((2147483640 + (sign * number % 10)) * sign);
	    
	}
	else
		return (number);
}
