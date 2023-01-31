#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the first node of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (fast && slow && fast->next)
	{
	slow = slow->next;
	fast = fast->next->next;
	count++;

	if (slow == fast)
	{
	printf("-> [%p] %d\n", (void *) slow, slow->n);
	exit(98);
	}

	printf("[%p] %d\n", (void *) head, head->n);
	head = head->next;
	}

	return (count);
}
