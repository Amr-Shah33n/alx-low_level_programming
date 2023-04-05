#include "main.h"

/**
 * _print_rev_recursion - prints reverse of the string
 * @s: input string
 *
 * Return: void, prints reverse of the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*--s);
}
