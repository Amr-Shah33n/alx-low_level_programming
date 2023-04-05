#include "main.h"

/**
 * _strlen_recursion - gets length of input string
 * @s: input string
 *
 * Return: length of input string
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
