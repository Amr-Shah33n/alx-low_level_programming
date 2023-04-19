#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - print name based on passed function
 * @name: name to be printed
 * @f: input function
 * Return: void only prints
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
