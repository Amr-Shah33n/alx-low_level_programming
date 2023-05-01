#include "lists.h"
/**
 * pop_listint - deletes head node and returns its value
 * @head: list head node
 * Return: value of head node or 0 if list is empty
 **/
int pop_listint(const listint_t **head)
{
	listint_t *tmp;
	int val = 0;

	if (*head == NULL || head == NULL)
		return (0);
	val = *head->n;
	tmp = *head;
	*head = *head->next;
	free(tmp);
	return (val);
}
