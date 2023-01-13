#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - returns pointer to concatenated strings
 * @s1: string 1
 * @s2: string 2
 * Return:concatenated string or NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int c = 0;
	int j = 0;
	int len;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[c] != '\0')
		c++;

	while (s2[j] != '\0')
		j++;

	len = c + j;

	ptr = (char *)malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = s1[i];

	for (i = 0; i < j; i++)
		ptr[i + c] = s2[i];

	ptr[len] = '\0';

	return (ptr);
}
