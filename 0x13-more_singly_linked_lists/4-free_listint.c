#include "lists.h"

/**
 * free_listint - frees linked list of ints from memory
 * @head: input linked list to be freed
 * Return: void
 **/
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
