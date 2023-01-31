#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - singly linked list
 * @h: pointer to the head
 *
 * Return: the number of element in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	h = h->next;
	}
	return (nodes);
}
