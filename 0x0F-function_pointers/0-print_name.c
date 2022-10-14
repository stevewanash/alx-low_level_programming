#include <stdio.h>

/**
 * print_name - prints a string
 * @name: the string to be printed
 * @f: a pointer to a function that will
 * print the name string
 * 
 * No Return
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}