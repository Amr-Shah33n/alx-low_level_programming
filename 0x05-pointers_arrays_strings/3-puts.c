#include "main.h"

/**
 * _puts - prints input string
 * @str: pointer to input string
 *
 * Return: void return, prints string
 */
void _puts(char *str)
{
	int i = 0;
	int length = _strlen(str);

	while (i < length)
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar(10);
}
