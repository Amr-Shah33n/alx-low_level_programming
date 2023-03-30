#include "main.h"

/**
 * str_toupper - transfor string to upper case
 * @dest: string input
 * Return: pointer to uppercase string
 */
char *string_toupper(char *dest)
{
	char *start = dest;

	while (*dest != '\0')
	{
		if (*dest >= 97 && *dest <= 122)
		{
			*dest = *dest - 32;
		}
		dest++;
	}
	return (start);
}
