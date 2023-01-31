#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new
 * node to a listint_t list at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL or the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	temp = *head;
	if (idx == 0)
	{
	new->next = temp;
	*head = new;
	return (new);
	}

	for (i = 0; temp != NULL && i < idx - 1; i++)
	temp = temp->next;

	if (temp == NULL)
	return (NULL);

	new->next = temp->next;
	temp->next = new;

	return (new);
}
