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
	int l;
	int m;
	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			for (l = 0; l < 10; l++)
			{
				for (m = 0; m < 10; m++)
				{
					if (l + m <= k + j || (l + m == k + j && j == l))
					{
						continue;
					}
					putchar(j + '0');
					putchar(k + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(m + '0');
					if (k + 1 == j && j == 9)
					{
						putchar('\n');
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
