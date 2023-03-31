#include "main.h"

/**
 * cap_string -Capatilizes words in a string
 * @dest: string input
 * Return: pointer to uppercase string
 */
char *cap_string(char *dest)
{
	char *start = dest;

	while (*dest != '\0')
	{
		if ((*dest == '\t' || *dest == '\n' || *dest == ' ' || *dest == ';'
					|| *dest == '.' || *dest == ',' || *dest == '(' || *dest == ')'
					|| *dest == '{' || *dest == '}' || *dest == '!'
					|| *dest == '?' || *dest == '"') && *(dest + 1) != '\0')
		{
			if (*(dest + 1) >= 97 && *(dest + 1) <= 122)
			{
				*(dest + 1) = *(dest + 1) - 32;
			}
		}
		dest++;
	}
	return (start);
}
