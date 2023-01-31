#include "lists.h"

/**
 * sum_listint - sums the n value of the list
 * @head: head of list
 * Return: sum or 0 if head is null
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
