#include "lists.h"

/**
 * list_len - Returns length of linkedlinst
 * @h: input linked list
 * Return: number of nodes
 **/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
