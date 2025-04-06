#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a pointer to a pointer to the head node of the list.
 * @str: string element of the new_node.
 *
 * Return: address of the newly created node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *head_tmp = *head;

	if (new_node == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (head_tmp == NULL)
		*head = new_node;

	while (head_tmp != NULL)
	{
		if (head_tmp->next == NULL)
		{
			head_tmp->next = new_node;
			break;
		}
		head_tmp = head_tmp->next;
	}
	return (new_node);
}
