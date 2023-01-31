#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of a listint_t list
 * @n: integer
 * @head: points to the address of the head of the listint_t list
 *
 * Return: if the function fails - NULL or the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
