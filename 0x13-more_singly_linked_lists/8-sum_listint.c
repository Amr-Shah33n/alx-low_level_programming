#include "lists.h"
/**
 * sum_listint - returns sum of all linked list elements
 * @head: list input
 * Return: sum value of elements
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
