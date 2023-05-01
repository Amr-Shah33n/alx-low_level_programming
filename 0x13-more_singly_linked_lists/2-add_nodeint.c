#include "lists.h"

/**
 * add_nodeint - adds node to the head of a linked list
 * @head: double pointer to head node
 * @n: value of node
 * Return: Address of new element or null on faliure
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *start_node;

	start_node = malloc(sizeof(list_t));
	if (start_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		start_node->n = n;
		*head = start_node;
		return (start_node);
	}
	tmp = *head;

	start_node->n = n;
	*head = start_node;
	start_node->next = tmp;
	return (start_node);
}
