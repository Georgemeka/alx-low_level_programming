#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - adds new node to head of list
 * @head: head of list
 * @n: new node to be added
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
