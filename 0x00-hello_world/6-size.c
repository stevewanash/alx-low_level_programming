# include <stdio.h>

/**
 * main - gives size of various data types
 * @data_type: name of the data type
 * 
 * Return: 0 denotes an error or
 * the end of the function
 */

int main (char data_type)
{

	int size_result = sizeof(data_type);

	printf("Size of %c: %d byte(s)\n", data_type, size_result);

	return (0);

}
