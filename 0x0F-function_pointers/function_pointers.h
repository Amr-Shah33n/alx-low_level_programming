#include <stddef.h>
#ifndef FUN_POINTERS_HEADER
#define FUN_POINTERS_HEADER
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif