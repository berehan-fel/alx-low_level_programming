#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the first node of the list
 *
 * Description: You are not allowed to use more than 1 loop.
 *		You are not allowed to use malloc, free or arrays
 *		You can only declare a maximum of two variables in your function
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = previous;
		previous = current;
		current = *head;
	}

	*head = previous;
	return (*head);
}

