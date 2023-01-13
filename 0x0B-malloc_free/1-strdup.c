#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: Null if str is null
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	ptr = (char *)malloc(sizeof(char) * c + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = str[i];
	return (ptr);
}
