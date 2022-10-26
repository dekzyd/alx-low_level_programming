#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first node
 * @idx: position to insert new node
 * @n: new node data
 *
 * Return: pointer to node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp, *temp2, *newnode;
	unsigned int count;

	ptr = *head;
	count = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (ptr != NULL)
	{
		if (count == idx - 1)
		{
			temp2 = ptr->next;
			ptr->next = newnode;
			newnode->next = temp2;
			return (newnode);
		}
		temp = ptr->next;
		count++;
		ptr = temp;
	}
	return (NULL);
}
