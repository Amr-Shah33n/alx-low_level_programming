#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints input arguments based on string formator
 * @format: formatter
 * Return: void, no return
 **/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *string;
	va_list arguments;

	va_start(arguments, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%i", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				string = va_arg(arguments, char*);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}
