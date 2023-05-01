#include "lists.h"
/**
 * listint_len - number of linked list elements
 * @h: list input
 * Return: int value number of elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
