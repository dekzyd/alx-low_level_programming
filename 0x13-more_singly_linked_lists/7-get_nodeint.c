#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: node to return.
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int count;

	ptr = head;
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		temp = ptr->next;
		count++;
		ptr = temp;
	}
	return (NULL);
}
