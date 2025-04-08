#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a double pointer to the first node of the list
 * @n: the n element of a lisint_t structure.
 *
 * Return: the address of the new element or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new_node;
			break;
		}
		tmp = tmp->next;
	}

	return (new_node);
}
