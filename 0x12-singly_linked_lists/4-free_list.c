#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the head node of the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
