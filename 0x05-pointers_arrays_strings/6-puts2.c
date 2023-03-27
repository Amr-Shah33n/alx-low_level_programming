#include "main.h"

/**
 * puts2 - prints every second char of input string
 * @str: pointer to input string
 *
 * Return: void return, prints string
 */
void puts2(char *str)
{
	int length = _strlen(str);
	char *max = str + length - 1;

	while (str <= max)
	{
		_putchar(*str);
		str = str + 2;
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
