#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of
 * a dlistint_t linked list.
 *
 * @head: Double pointer to the head of the dlistint_t list.
 *
 * @index: The index of the node that should be deleted, starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *to_delete;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	to_delete = current->next;

	current->next = to_delete->next;

	if (to_delete->next != NULL)
	{
		to_delete->next->prev = current;
	}
	free(to_delete);
	return (1);
}
