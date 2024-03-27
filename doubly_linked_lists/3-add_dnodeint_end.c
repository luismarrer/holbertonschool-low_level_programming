#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: A double pointer to the head of the dlistint_t list.
 *
 * @n: The integer for the new node to contain.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *traverse;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}

		traverse->next = new_node;
		new_node->prev = traverse;
	}

	return (new_node);
}

