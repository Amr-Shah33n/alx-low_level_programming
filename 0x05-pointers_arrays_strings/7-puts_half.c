#include "main.h"

/**
 * puts_half - prints half of input string
 * @str: pointer to input string
 *
 * Return: void return, prints string
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int n = 0;
	int start = 0;
	int i = 0;

	if (length % 2 == 0)
	{
		n = length / 2;
		start = n;
	}
	else
	{
		n = (length - 1) * 0.5;
		start = n + 1;
	}

	while (i < length)
	{
		if (i >= start)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar(10);
}
/**
 * _strlen - returns size of string
 * @s: pointer to input string
 *
 * Return: Int string size
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
