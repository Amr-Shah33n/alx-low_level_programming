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

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar(10);
}
