# include <stdio.h>

/**
 * main - prints various data types sizes
 * @data_type: name of the data type
 *
 * Return: 0 denotes an invalid data type
 * or the end of the function
 */

int main(char data_type)
{

	size_result = sizeof(data_type);

	printf("Size of a %c: %d byte(s)\n", data_type, size_result);

	return (0);

}
