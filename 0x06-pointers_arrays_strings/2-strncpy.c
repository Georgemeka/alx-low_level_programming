#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: dest variable
 * @src: src variable
 * @n: parameter n
 * Return: returns pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
