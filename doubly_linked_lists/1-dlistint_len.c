#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 *
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

