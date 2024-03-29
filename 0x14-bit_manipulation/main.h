#ifndef BINARY_HEADER
#define BINARY_HEADER
#include <stddef.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int clear_bit(unsigned long int *n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
void print_binary(unsigned long int n);
#endif
