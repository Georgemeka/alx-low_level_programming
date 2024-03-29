#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	size += (ac + 1);
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';

	return (s);
}
