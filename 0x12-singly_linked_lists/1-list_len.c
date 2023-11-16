#include <stdio.h>
#include "lists.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The length of the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
