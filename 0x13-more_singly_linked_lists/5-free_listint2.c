#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: pointer to the first element
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (*head == NULL)
		return;
	ptr = *head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
