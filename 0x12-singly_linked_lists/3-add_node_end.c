#include "lists.h"

/**
 * add_node_end - a tnew node to the end of a linked list
 * @head: a double pointer to the head of alinked list
 * @str: string to be copied to str member of the linked list
 * Return: a pointer to the newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	char *dup_str;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	dup_str = strdup(str);
	if (!str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}

/**
 * _strlen - finds the length of a string;
 * @s: string to be find length of
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}


