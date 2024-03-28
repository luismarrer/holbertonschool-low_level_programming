#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: A pointer to the head of the dlistint_t list.
 *
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of a dlistint_t linked list.
 * If the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}
		head = head->next;
		current_index++;
	}

	return (NULL);
}

