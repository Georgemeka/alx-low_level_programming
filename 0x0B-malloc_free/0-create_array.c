#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: c variable
 * Return: Null if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	t = (char *)malloc(sizeof(char) * size);

	if (t == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	return (t);
}
