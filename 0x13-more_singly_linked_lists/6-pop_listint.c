#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodeData;

	if (!head)
		return (0);

	temp = *head;
	nodeData = temp->n;
	*head = (*head)->next;
	free(temp);

	return (nodeData);
}
