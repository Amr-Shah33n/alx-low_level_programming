#include "lists.h"

/**
 * add_node - adds node to the head of a linked list
 * @head: double pointer to head node
 * @str: value of node
 * Return: Address of new element or null on faliure
 **/
list_t *add_node(list_t **head, const char *str)
{
	char *val = strdup(str);
	list_t *tmp;
	list_t *start_node;

	if (val == NULL)
	{
		free(val);
		return (NULL);
	}
	start_node = malloc(sizeof(list_t));
	if (start_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		start_node->str = (str != NULL) ? val : NULL;
		start_node->len = (str != NULL) ? strlen(val) : 0;
		*head = start_node;
		return (start_node);
	}
	tmp = *head;

	start_node->str = (str != NULL) ? val : NULL;
	start_node->len = (str != NULL) ? strlen(val) : 0;
	*head = start_node;
	start_node->next = tmp;
	return (start_node);
}
