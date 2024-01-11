#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the doubly linked list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
   dlistint_t *current = *head;
   unsigned int i;

   if (current == NULL || index >= dlistint_len(*head))
       return (-1);

   if (index == 0)
   {
       *head = current->next;
       if (current->next != NULL)
           current->next->prev = NULL;
       free(current);
       return (1);
   }

   for (i = 0; current && i < index; i++)
   {
       if (i == index - 1)
       {
           if (current->next != NULL)
           {
               current->next->prev = current->prev;
               current->prev->next = current->next;
               free(current);
               return (1);
           }
           else
               return (-1);
       }
       current = current->next;
   }

   return (-1);
}

