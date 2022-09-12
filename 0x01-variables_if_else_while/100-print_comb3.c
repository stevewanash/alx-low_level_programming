# include <stdio.h>

/**
 * main - prints all possible combinations
 * of one digit numbers
 * no parameters
 *
 * Return: 0 denotes the end of the
 * function
 */
int main(void)
{
	int j;
	int k;
	for (j = 0; j < 10; j++)
	{
		for (k = 0;
		k < 10;
		k++)
		{
			if (k < j || k == j)
			{
				continue;
			}
			putchar(j + '0');
			putchar(k + '0');
			if (j + 1 == 9 && j + 1 == k)
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
