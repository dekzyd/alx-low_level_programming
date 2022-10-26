#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first element
 * @index: index of the node to be deleted
 * Return: 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp, *temp2, *nextnode;
	unsigned int count;

	count = 0;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (ptr != NULL)
	{
		if (count == index - 1)
		{
			temp2 = ptr->next;
			nextnode = temp2->next;
			ptr->next = nextnode;
			free(temp2);
			return (1);
		}
		temp = ptr->next;
		count++;
		ptr = temp;
	}
	return (-1);
}
