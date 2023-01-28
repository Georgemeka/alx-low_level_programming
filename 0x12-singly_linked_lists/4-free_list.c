#include "lists.h"

/**
 * free_list - frees list
 * @head: head list that represents whole list ot be freed
 * Return: freed list
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
