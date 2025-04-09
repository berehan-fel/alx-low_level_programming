#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print - prints part of a linked list
 * @head: points to the first node of the list
 * @slow: the contact point of fast and slow in floyd's algorith
 * @nodesptr: points to the number of nodes.
 */
void print(const listint_t *head, const listint_t *slow, size_t *nodesptr)
{
	while (head->next != slow->next)
	{
		slow = slow->next;
		head = head->next;
		printf("[%p] %d\n", (void *)(slow), slow->n);
		(*nodesptr)++;
	}
	printf("-> [%p] %d\n", (void *)(slow->next), slow->next->n);
	(*nodesptr)++;
}
/**
 * print_listint_safe - prints a linked list, safe for a loop.
 * @head: points to the first nodes of the list.
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);
	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nodes++;
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			nodes++;
			break;
		}
	}
	if (fast != NULL && fast == slow)
		print(head, slow, &nodes);
	if (fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			nodes++;
			slow = slow->next;
		}
	}
	return (nodes);
}
