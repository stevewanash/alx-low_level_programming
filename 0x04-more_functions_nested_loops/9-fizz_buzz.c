#include <stdio.h>

/**
 * main - prints numbers 1- 100 except:
 * multiples of 3 replaced by "fizz"
 * multiples of 5 replaced by "buzz"
 * multiples of both replaced by "fizz buzz"
 *
 * Return: 0 always.
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (!(i == 100))
		{
			if (!((i % 3) == 0) && !((i % 5) == 0))
			{
				printf("%d ", i);
				continue;
			}
			if ((i % 3) == 0 && !((i % 5) == 0))
			{
				printf("Fizz ");
				continue;
			}
			if ((i % 5) == 0 && !((i % 3) == 0))
			{
				printf("Buzz ");
				continue;
			}
			if ((i % 3) == 0 && (i % 5) == 0)
			{
				printf("FizzBuzz ");
				continue;
			}
		}
		printf("Buzz\n");
	}
	return (0);
}
