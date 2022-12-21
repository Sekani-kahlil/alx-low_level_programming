#include "main.h"

/**
 *_strncat -concatenates two string using an inputed number of bytes
 * @dest: copying to
 * @src: copying from
 * @n: The number of bytes to be copied to @dest.
 *
 * Return: @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);

