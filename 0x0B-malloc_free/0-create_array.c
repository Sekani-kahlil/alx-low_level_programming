#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates space for an array
 * @c: char
 * @size: unsigned int
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
