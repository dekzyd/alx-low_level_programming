#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first node.
 *
 * Return: data of removed node.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL)
		return (0);

	ptr = *head;
	data = (*head)->n;
	(*head) = (*head)->next;
	free(ptr);
	return (data);

}
