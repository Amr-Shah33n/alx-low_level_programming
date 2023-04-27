#include "lists.h"

/**
 * free_list - frees linked list from memory
 * @head: input linked list to be freed
 * Return: void
 **/
void free_list(list_t *head)
{
	list_t *p = head;

	while (head != NULL)
	{
		p = head;
		free(head->str);
		head = head->next;
		free(p);
	}
}
