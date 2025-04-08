#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the first node of the list
 * @idx: the position to insert the new node at
 * @n: (n) value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = tmp;
		return (new_node);
	}
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
