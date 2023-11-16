#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
