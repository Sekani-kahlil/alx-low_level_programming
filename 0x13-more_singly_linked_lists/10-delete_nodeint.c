#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 * On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	temp = *head;
	if (index == 0)
	{
	*head = temp->next;
	free(temp);
	return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
	prev = temp;
	temp = temp->next;
	}

	if (temp == NULL)
	return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
