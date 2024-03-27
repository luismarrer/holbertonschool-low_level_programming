#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: A double pointer to the head of the list_t list.
 *
 * @str: The string to be added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *traverse;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[count])
	{
		count++;
	}

	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	traverse = *head;

	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new_node;
	return (new_node);
}
