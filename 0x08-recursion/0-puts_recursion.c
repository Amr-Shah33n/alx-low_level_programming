#include "main.h"

/**
 * _puts_recursion - uses recursion to print a string
 * @s: pointer to input string
 * Return - void, only prints to stdout
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
