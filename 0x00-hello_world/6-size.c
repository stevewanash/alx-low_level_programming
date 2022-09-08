#include <stdio.h>

/**
 * main - give size of various data types
 * @data_type: name of data type
 *
 * Return: 0 denotes invalid data type
 * or end of function
 */

int main(char data_type)
{

	int size_result = sizeof(data_type);

	printf("size of a %c: %d byte(s)\n, data_type, size_result);

	return (0);

}
