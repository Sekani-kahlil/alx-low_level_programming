#include "main.h"

/**
 * _islower - check if a number is lowercase
 * @c: the integer value it receiveis
 * Return: 1 if true. 0 if false
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	return (1);
	}
	}
	return (0);
}
