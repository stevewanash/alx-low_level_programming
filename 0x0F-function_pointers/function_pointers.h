void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#ifndef TYPEDEF_SIZE_T_DECLARED_
#define TYPEDEF_SIZE_T_DECLARED_
typedef unsigned int size_t;
#endif