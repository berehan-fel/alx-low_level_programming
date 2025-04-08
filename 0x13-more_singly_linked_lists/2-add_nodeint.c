#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a double ponter to the first node of the list
 * @n: n element of the structure listint_t
 *
 * Return: the address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp;
	*head = new_node;

	return (new_node);
}

