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
	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			for (l = 0; l < 10; l++)
			{
				if (k < j || l < k || k == j || k == l || j == l)
				{
					continue;
				}
				putchar(j + '0');
				putchar(k + '0');
				putchar(l + '0');
				if (k + 1 == 9 && j + 1 == k)
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
