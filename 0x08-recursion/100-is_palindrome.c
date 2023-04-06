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

/**
 * palindrome_helper - helper recursive method to check if palindrome
 * @s: pointer to input string
 * @end: pointer to end charachter
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_helper(char *s, char *end)
{
	if (s >= end)
	{
		return (1);
	}
	if (*s == *end)
	{
		return (palindrome_helper(++s, --end));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - return 1 if string is palindrome
 * @s: input string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *end = s + _strlen_recursion(s) - 1;

	if (s == end)
	{
		return (1);
	}
	else
	{
		return (palindrome_helper(s, end));
	}
}

