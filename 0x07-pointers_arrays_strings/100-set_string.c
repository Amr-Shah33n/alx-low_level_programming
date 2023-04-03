#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: double pointer
 * @to: pointer to a char
 * Return: void, only sets values
 **/
void set_string(char **s, char *to)
{
	*s = to;
}
