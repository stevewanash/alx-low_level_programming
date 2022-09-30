#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of program
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: always zero
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);

}
