#include "lists.h"

/**
 * len - Returns length of linkedlinst
 * @h: input linked list
 * Return: number of nodes
 **/
size_t len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		p = p->next;
		n++;
	}
	return (n);
}

/**
 * add_nodeint_end - adds node to the end of a linked list
 * @head: double pointer to head node
 * @n: value of newly added node
 * Return: Address of new element or null on faliure
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t size = 0;
	size_t i = 0;
	listint_t *tmp;
	listint_t *end_node;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		end_node->n = n;
		*head = end_node;
		return (end_node);
	}
	size = len(*head);
	tmp = *head;
	while (i < size - 1)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = end_node;
	end_node->n = n;
	return (end_node);
}
