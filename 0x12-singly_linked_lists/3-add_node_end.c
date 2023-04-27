#include "lists.h"

/**
 * len - Returns length of linkedlinst
 * @h: input linked list
 * Return: number of nodes
 **/
size_t len(const list_t *h)
{
	size_t n = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		p = p->next;
		n++;
	}
	return (n);
}

/**
 * add_node_end - adds node to the end of a linked list
 * @head: double pointer to head node
 * @str: value of node
 * Return: Address of new element or null on faliure
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	char *val = strdup(str);
	size_t size = 0;
	size_t i = 0;
	list_t *tmp;
	list_t *end_node;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		end_node->str = val;
		end_node->len = strlen(val);
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
	end_node->str = val;
	end_node->len = strlen(val);
	return (end_node);
}
