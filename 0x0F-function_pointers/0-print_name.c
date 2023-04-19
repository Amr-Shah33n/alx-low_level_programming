#include "function_pointers.h"

/**
 * print_name - print name based on passed function
 * @name: name to be printed
 * @f: input function
 * Return: void only prints
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
