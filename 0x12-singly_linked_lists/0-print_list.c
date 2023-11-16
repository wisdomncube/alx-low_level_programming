#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * This function iterates through each node in the list and prints the string
 * and its length. If the string is NULL, it prints "[0] (nil)".
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
