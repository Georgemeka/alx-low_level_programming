#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at cetain position
 * @index: position of node to delete
 * @head: head of linked list
 * Return: -1 or NULL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	next_node = current->next;
	if (next_node == NULL)
		return (-1);

	current->next = next_node->next;
	free(next_node);

	return (1);
}
