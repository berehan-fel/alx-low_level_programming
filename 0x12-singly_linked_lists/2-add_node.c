#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to a pointer of the head node of the list.
 * @str: string element of the new node.
 *
 * Return: address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
