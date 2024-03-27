#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: A double pointer to the head of the list_t list.
 *
 * @str: The string to be added to the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int count = 0;

	while (str[count])
	{
		count++;
	}

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

	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
