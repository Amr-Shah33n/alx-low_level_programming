#include "lists.h"
/**
 * size_t_print_listint - prints a list of int values
 * @h: list input
 * Return: int value number of elements
 **/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
