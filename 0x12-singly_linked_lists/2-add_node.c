#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new node at hte beginning
 * @head: head of the list
 * @str: string data of the list to be added
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = _strlen(str);
	temp->next = (*head);
	(*head) = temp;
	return (temp);
}

/**
 * _strlen - function to calculate the length of a string
 * @s: string to work with
 * Return: length of string
 */

int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}
