#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index,
 *                          of a listint_t linked list
 * @head: double pointer to the first node of the list
 * @index: the node that should be deleted and starts from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current != NULL && current->next != NULL)
	{
		if (i == index - 1)
		{
			tmp = current->next;
			current->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
