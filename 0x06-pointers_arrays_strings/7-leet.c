#include "main.h"

/**
 * leet - replaces with leet charachters
 * @dest: string input
 * Return: pointer to transformed string
 */
char *leet(char *dest)
{
	char *start = dest;
	char leet[] = "a4e3o0t7l1";
	char *wp;

	while (*dest != '\0')
	{
		wp = leet;
		while (*wp != '\0')
		{
			if (*dest == *wp || *dest == *wp - 32)
			{
				*dest = *(++wp);
				break;
			}
			wp++;
		}
		dest++;
	}
	return (start);
}
