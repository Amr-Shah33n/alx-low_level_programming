#include "lists.h"
/**
 * get_nodeint_at_index - prints a list of int values
 * @head: pointer to head
 * @index: index of node to be retrieved
 * Return: list node if at index if found or null
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return ((i == index) ? head : NULL);
}
