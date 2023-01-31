#include "lists.h"

/**
 * free_listint - frees list
 * @head: head of list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head)
	{
		tempNode = head;
		head = head->next;
		free(tempNode);
	}
}
