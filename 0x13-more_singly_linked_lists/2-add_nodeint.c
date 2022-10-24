#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/** add_nodeint - adds a new node at the begining of a list
 * @head: pointer to the address of the first element
 * @n: node data
 * Return: the address of the new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (n == NULL || ptr == NULL)
		return (NULL);
	ptr->n = n;

	if (ptr->n == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
