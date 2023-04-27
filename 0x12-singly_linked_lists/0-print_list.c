#include "lists.h"

/**
 * print_list - prints all elements present in a linkedlist
 * @h: input linked list
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (!h)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		(h->str != NULL) ?
			printf("[%u] %s\n", h->len, h->str) : printf("[0] (nil)\n");
		h = h->next;
		n++;
	}
	return (n);
}
