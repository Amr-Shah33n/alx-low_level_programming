#include "lists.h"

/**
 * free_listint2 - frees linked list of ints from memory
 * @head: double pointer to linked list to be freed
 * Return: void
 **/
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
