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
	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
		if (j == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}				
	return (0);
}
